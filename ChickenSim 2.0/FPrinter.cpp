#include "FPrinter.h"
#include <iostream>

void FPrinter::PrintMoveHistory(FMoveHistory::Move MoveHistory[MOVES][PLAYERS])
{

	std::cout << "    1 2\n-------" << std::endl;
	for (int i = 0; i < MOVES; i++)
	{
		printf("%3.i %s %s\n", i + 1, MoveHistory[i][P1] ? "D" : "C", MoveHistory[i][P2] ? "D" : "C"); // if the value stored in the array is 0 print C, if 1 print D
		std::cout << std::endl;
	}

	return;
}