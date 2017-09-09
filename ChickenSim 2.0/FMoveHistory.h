#pragma once

#include <vector>

class FMoveHistory 
{
public:

	FMoveHistory() // Initialises with these preset values
	{
		AddMoves(1, 0);
		AddMoves(0, 1);
		AddMoves(1, 0);
		AddMoves(0, 1);
		AddMoves(1, 0);
	}

	void AddMoves(int, int);
	std::vector<int> GetP1MoveHist() const;
	std::vector<int> GetP2MoveHist() const;

private:
	std::vector<int> P1MoveHistory;
	std::vector<int> P2MoveHistory;
};