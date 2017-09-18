#include "FMoveHistory.h"

std::vector<int> FMoveHistory::GetP1MoveHist() const { return P1MoveHistory; }
std::vector<int> FMoveHistory::GetP2MoveHist() const { return P2MoveHistory; }

/* Adds a pair of moves to a FMoveHistory
 *
 * @param P1Move player 1's move
 * @param P2Move player 2's move
 */
void FMoveHistory::AddMoves(int P1Move, int P2Move)
{
	P1MoveHistory.push_back(P1Move);
	P2MoveHistory.push_back(P2Move);
	return;
}

