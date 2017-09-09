#include "FMoveHistory.h"

std::vector<int> FMoveHistory::GetP1MoveHist() const { return P1MoveHistory; }
std::vector<int> FMoveHistory::GetP2MoveHist() const { return P2MoveHistory; }

void FMoveHistory::AddMoves(int P1Move, int P2Move)
{
	P1MoveHistory.push_back(P1Move);
	P2MoveHistory.push_back(P2Move);
	return;
}

