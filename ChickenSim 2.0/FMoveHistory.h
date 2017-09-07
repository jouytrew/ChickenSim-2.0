#pragma once

const int PLAYERS = 2;
const int MOVES = 5;

const int P1 = 0;
const int P2 = 1;

class FMoveHistory 
{
public:
	enum Move 
	{
		COOP, DEFECT
	};

	Move MoveHistory[MOVES][PLAYERS] = { { Move::COOP, Move::DEFECT },
										 { Move::COOP, Move::DEFECT },
										 { Move::COOP, Move::DEFECT },
										 { Move::COOP, Move::DEFECT },
										 { Move::COOP, Move::DEFECT } }; // Temporary placeholder
};