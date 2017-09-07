#include "FPrinter.h"
#include <iostream>

void FPrinter::PrintMoveHistory(FMoveHistory::Move MoveHistory[MOVES][PLAYERS])
{
	std::cout << "Hello from PrintMoveHistory inside FPrinter Printer" << std::endl;
	printf("    1 2\n-------\n");
	for (int i = 0; i < MOVES; i++)
	{
		printf("%3.i %s %s\n", i + 1, (MoveHistory[i][P1] ? "D" : "C"), (MoveHistory[i][P2] ? "D" : "C"));
		std::cout << std::endl;
	}

	return;
}