#pragma once

#include <iostream>
#include "FMoveHistory.h"
#include "FPrinter.h"

const int COOP = 1;
const int DEFECT = 0;

FMoveHistory MoveHistory;

/* Plays the game */
int main()
{
	FPrinter::PrintMoveHistory(MoveHistory);

	return 0;
}