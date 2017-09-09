#pragma once

#include <iostream>
#include "FMoveHistory.h"
#include "FPrinter.h"

const int COOP = 1;
const int DEFECT = 0;

FMoveHistory MoveHistory;
FPrinter Printer;

int main()
{
	/*
	const std::vector<int> LocalCopy = MoveHistory.GetP1MoveHist();
	std::vector<int>::const_iterator it = LocalCopy.begin();
	while (it != LocalCopy.end()) 
	{
		std::cout << (*it ? "C" : "D") << std::endl;
		it++;
	}*/
	Printer.PrintMoveHistory(MoveHistory);

	return 0;
}