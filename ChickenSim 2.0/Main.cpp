#pragma once

#include <iostream>
#include "FPrinter.h"
#include "FMoveHistory.h"

typedef FMoveHistory::Move Move;

FPrinter Printer;
FMoveHistory MoveHistory;

int main()
{
	Printer.PrintMoveHistory(MoveHistory.MoveHistory);

	return 0;
}
