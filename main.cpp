#include "BOARD.h"


int main()
{
    // board initialization
    BOARD Board;
    Board.inputBoard();

    BOARD goalBoard;
    goalBoard.inputBoard();

    // main logic
    if (Board.isGoal(goalBoard))
    {
        Board.outputBoard();
        return 0;
    }

    for(unsigned int i = 0; i < Board.getBoardSize(); i++)
    { 
        if (BOARD::compareElement(Board.board[i], goalBoard.board[i])) continue;

        if (Board.moveElement(i)) Board.outputBoard();

        if (Board.isGoal(goalBoard)) break;
    }

    // so the program doesn't terminate instantly
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}