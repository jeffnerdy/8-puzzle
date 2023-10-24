#pragma once

#include <iostream>
#include <vector>
#include <limits>

class BOARD
{
private:
	int N{ 0 };

public:
	std::vector<int> board;

public:
	void inputBoard();
	void outputBoard();

	unsigned int getBoardSize();

	static bool compareElement(unsigned int element1, unsigned int element2);

	bool isGoal(BOARD goalBoard);
	bool moveElement(unsigned int index);

	BOARD()
	{
		int n{ 0 };
		std::cin >> n;
		if(n >= 1 && n < 15) N = n;
	}
};