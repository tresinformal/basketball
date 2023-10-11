# basketball

Tresinformal's 2023 team basketball game 

## Game design document

![](design_document_and_issues.png)

> The game design document is written in English.
> Ideally each sentence is `SMAR` (specific, measurable, assignable, relevant,
> see [SMART criteria](https://en.wikipedia.org/wiki/SMART_criteria)),
> linked to (at least) one Issue.
> The game designers decide what is in the game design document.
> (see Issues what are the criteria for a good Issue)

The game has two players [#13].

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

# This is another text 
