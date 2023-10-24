#include "BOARD.h"

void BOARD::inputBoard()
{
    int input{ 0 };

    for (unsigned int i = 0; i < (N*N); i++)
    {
        std::cin >> input;
        board.emplace_back(input);
    }

    std::cout << "\n";
}

void BOARD::outputBoard()
{
    for (unsigned int i = 0; i < this->getBoardSize(); i++)
    {
        std::cout << board[i] << " ";
        if ((i + 1) % N == 0) std::cout << "\n";
    }

    std::cout << "\n";
}

unsigned int BOARD::getBoardSize()
{
    return board.size();
}

bool BOARD::compareElement(unsigned int element1, unsigned int element2)
{
    return element1 == element2;
}

bool BOARD::isGoal(BOARD goalBoard)
{
    if (this->getBoardSize() != goalBoard.getBoardSize())
    {
        return false;
    }

    for (unsigned int i = 0; i < this->getBoardSize(); i++)
    {
        if (!compareElement(board[i], goalBoard.board[i]))
        {
            return false;
        }
    }

    return true;
}

bool BOARD::moveElement(unsigned int index)
{
    if (board[index] == 0)
    {
        return false;
    }

    int range{ 0 };
    for (unsigned int i = 0; i < this->getBoardSize(); i++)
    {
        if (board[i] == 0)
        {
            range = index - i;
            break;
        }
    }

    if (range == 1)
    {
        if ((index) % N == 0) // left edge
        {
            return false;
        }

        board[index - 1] = board[index];
        board[index] = 0;
        return true;
    }

    if (range == -1)
    {
        if ((index + 1) % N == 0) // right edge
        {
            return false;
        }

        board[index + 1] = board[index];
        board[index] = 0;
        return true;
    }

    if (range == N)
    {
        board[index - N] = board[index];
        board[index] = 0;
        return true;
    }

    if (range == -N)
    {
        board[index + N] = board[index];
        board[index] = 0;
        return true;
    }

    return false;
}