# Git & Bash Cheatsheet

In Command Line / Git Bash:

`cd` to **c**hange **d**irectory.

For example, `cd basketball/`.

**Special -** in bash, when giving a path:
- `.` means "the current directory", for example `cd ./basketball` means the same as `cd baskteball/`
- `..` means "the directory above", for example if I am in `basketball` and want to go back to the previous directory I can do `cd ../`.

`ls` lists all files and folder in a given folder

For example, `ls`, `ls ../drakkar/src`.

*Before making changes, always update the version of the project on you local computer with the version on origin (that is, GitHub) with `git pull`.* If you don't, you may run into a merge conflict when you want to push.

To change a text-like file, use `nano file.txt`. This will open a text editor called "Pico" inside the command line. You can navigate through the text with the arrow keys, make changes, and when ready to exit press Ctrl + X. Pico will ask if you want to save your changes, press Y for Yes (or N for No) and Enter to confirm that you want to keep the same file name.

`git status` to enquire about the changes that have been made. Tracked changes appear in green, untracked changes appear in red and will not be committed yet. 

`git add file.cpp` to add changes made to `file.cpp` (for example) to the tracked changes.

When the changes appear in green, they can be committed:

`git commit`

This will open another text editor called Vim. You can write your commit message and when ready to exit enter `:wq`, or `:wq!` if Vim is being capricious. 

Alternatively, you can add the `-m` option (for "message") after the commit command to add a comment without going through Vim:

`git commit -m "my commit message"`

You can continue working and make further commits, or directly push back to origin:

`git push`

If someone else has edited the same file in the same place since you last used `git pull`, git will probably not know which of the two versions should be kept and create a merge conflict, which means a human (you) has to solve it. You cannot push or pull again until you have solved the conflict by manually editing the file.

A merge conflict looks something like this:

```bash
This text is the same across the two versions.
<<<<<<<< HEAD
Here the text has been changed in your version.
============
Here the text has also been changed by someone else.
>>>>>>>>> jg33gjg79liuyvt680
This text is the same across the two versions.
```

To solve the merge conflict, you need to:
1. Decide which version you should keep (the one above the ==== line, below it, or both? or something different?)
2. Remove the `<<<< HEAD`, `======` and `>>>>` lines.

Also check for the rest of the file, there might be multiple merge conflicts in different places!

When you have resolved it, you can commit your changes and push to origin.



