## Introduction
The 8-puzzle problem is a classic puzzle game in which a 3x3 grid contains eight numbered tiles and one empty space. The goal of the puzzle is to rearrange the tiles into a specific configuration by sliding them around the grid one at a time. My program tries to showcase this puzzle but in a slightly different approach.

## How does it work?
Each element/tile of the input board is compared to an element of the same board but with a goal/final state -which should be provided by the user. By the end of each comparison, a procedure runs to check if the current board is in a goal state, if yes, the puzzle is concidered solved, if not, the comparison continues until the last tile is reached.

## How to use it?
1) The board shoul be of NxN dimentions. Input the integer N.
2) Input the board's elements row by row.
3) Inout the board's elements, but this time in a goal state.
4) Wait for the algorithm to do its magic.
