# basketball

Trêsinformal's 2023 team basketball game 

Branch      |[![GitHub Actions logo](GitHubActions.png)](https://github.com/tresinformal/basketball/actions)|[![Codecov logo](Codecov.png)](https://www.codecov.io)
------------|-----------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------
`master`    |[![check](https://github.com/tresinformal/basketball/actions/workflows/check.yml/badge.svg?branch=main)](https://github.com/tresinformal/basketball/actions/workflows/check.yml)   |[![codecov.io](https://codecov.io/github/tresinformal/basketball/coverage.svg?branch=master)](https://codecov.io/github/tresinformal/basketball/branch/master)
`develop`   |[![check](https://github.com/tresinformal/basketball/actions/workflows/check.yml/badge.svg?branch=develop)](https://github.com/tresinformal/basketball/actions/workflows/check.yml)  |[![codecov.io](https://codecov.io/github/tresinformal/basketball/coverage.svg?branch=develop)](https://codecov.io/github/tresinformal/basketball/branch/develop)
`mart`   |[![check](https://github.com/tresinformal/basketball/actions/workflows/check.yml/badge.svg?branch=mart)](https://github.com/tresinformal/basketball/actions/workflows/check.yml)  |[![codecov.io](https://codecov.io/github/tresinformal/basketball/coverage.svg?branch=mart)](https://codecov.io/github/tresinformal/basketball/branch/develop)

## Game design document

![](design_document_and_issues.png)

> The game design document is written in English.
> Ideally each sentence is `SMAR` (specific, measurable, assignable, relevant,
> see [SMART criteria](https://en.wikipedia.org/wiki/SMART_criteria)),
> linked to (at least) one Issue.
> The game designers decide what is in the game design document.
> (see Issues what are the criteria for a good Issue)




The game has two players [#13].
The game finishes when on player reaches 20 points.
The game has one basketball [#14].
All objects follow the laws of gravity (Newton's Second Law) [#15].
 There is an option to play on one side or two sides.
There is either one human player and a player controlled by computer or two human players.
There are two baskets, one in the each half of the yard. 
The player's clothes should have diffrent colors. 
The game has a music.
The player can mute it if she/he wants. 
The game counts a time. 
During the game the time shows. 
The game can be paused. 
If the player scores from inside the line, she/he gets two points. 
If the player scores from outside the line she/he gets three points.  
 

  


[The game finishes when on player reaches 20 points](https://github.com/tresinformal/basketball/issues/23).
[The game has two players](https://github.com/tresinformal/basketball/issues/11).
[The game has one basketball](https://github.com/tresinformal/basketball/issues/14).

All objects follow the laws of gravity (Newton's Second Law):

 * the [basketball](https://github.com/tresinformal/basketball/issues/15)
 * [others]

 90794d8c3c51388341a1e3b06ef34b87d9d61a75
## Issues

> Issues are the technical translation of the game design document.
> Ideally each sentence in the design document results in one Issue.

There are two types of Issues:

 * Testable: deal with the game logic and 
   contains a test in pseudocode (when written by juniors) or 
   C++ (when written by mediors and seniors).
 * Untestable: deal with how the game looks like
   and needs to be verified by a human

We use the Model-View-Controller Design Pattern to separate the game logic,
from the game visualization and input:

![](mvc.png)

<<<<<<< HEAD


read it 
=======
>>>>>>> 97abbfb88da207c4a292630dfbbffcef9db3d54f
