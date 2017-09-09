#pragma once

#include <iostream>
#include "FMoveHistory.h"
#include "FPrinter.h"

/* General idea of what Print Move History should print
 *     1 2
 * -------
 *   1 C D 
 *   2 D C
 * ### ? ?
 */
void FPrinter::PrintMoveHistory(FMoveHistory MoveHistory) const
{
	// create local copies of both move histories
	const std::vector<int> P1Moves = MoveHistory.GetP1MoveHist();
	const std::vector<int> P2Moves = MoveHistory.GetP2MoveHist();
	std::vector<int>::const_iterator I1 = P1Moves.begin();
	std::vector<int>::const_iterator I2 = P2Moves.begin();

	std::cout << "    1 2\n-------" << std::endl;
	for (int i = 0; i < P1Moves.size(); i++)
	{
		printf("%3.i ", i + 1);
		std::cout << (*I1 ? "C" : "D") << " " << (*I2 ? "C" : "D") << std::endl;
		I1++; I2++;
	}
}


