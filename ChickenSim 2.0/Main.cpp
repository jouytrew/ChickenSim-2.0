#pragma once

#include <iostream>
#include <array>
#include <vector>
#include <stdio.h>

#define PLAYERS 2
#define MOVES 5

#define P1 0
#define P2 1

enum Move 
{
	COOP, DEFECT
};

/*
#define COOP   true
#define DEFECT false
*/

void PrintArray(std::vector<int>);
void Print2DBools(std::vector<std::vector<bool>>);
void PrintBools(std::vector<bool>);
void Print2DArray(std::vector<std::vector<int>>);

void PrintMoveHistory(Move[MOVES][PLAYERS]);

std::vector<bool> Vector = { COOP, COOP, DEFECT, COOP, COOP, DEFECT, COOP };
std::vector<std::vector<bool>> MoveHistoryTest = { { COOP, COOP, DEFECT, COOP, COOP, DEFECT, COOP }, { DEFECT, DEFECT, DEFECT, DEFECT, DEFECT, DEFECT, DEFECT } };

Move MoveHistory[MOVES][PLAYERS] = { { Move::COOP, Move::DEFECT }, 
									 { Move::COOP, Move::DEFECT }, 
									 { Move::COOP, Move::DEFECT }, 
									 { Move::COOP, Move::DEFECT }, 
									 { Move::COOP, Move::DEFECT } };

int main()
{

	//PrintArray(Vector);dd
	//Print2DArray(Vector2D);
	//Print2DBools(MoveHistoryTest);

	PrintMoveHistory(MoveHistory);

	return 0;
}

void PrintMoveHistory(Move MoveHistory[MOVES][PLAYERS])
{
	std::cout << "Hello from PrintMoveHistory" << std::endl;
	printf("    1 2\n-------\n");
	for (int i = 0; i < MOVES; i++)
	{
		printf("%3.i %s %s\n", i+1, (MoveHistory[i][P1] ? "D" : "C"), (MoveHistory[i][P2] ? "D" : "C"));
		std::cout << std::endl;
	}

	return;
}








void PrintBools(std::vector<bool> MoveList)
{
	for (bool move : MoveList) 
	{
		std::cout << (move ? 'C' : 'D') << ' ';
	}
	return;
}

void Print2DBools(std::vector<std::vector<bool>> MoveList2D)
{
	for (std::vector<bool> Row : MoveList2D) {
		for (int X : Row)
		{
			std::cout << (X ? 'C' : 'D') << ' ';
		}
		std::cout << std::endl;
	}
	return;
}

void PrintArray(std::vector<int> Vector)
{
	for (int i : Vector)
	{
		std::cout << i << std::endl;
	}
	return;
}

void Print2DArray(std::vector<std::vector<int>> Vector2D)
{
	for (std::vector<int> RowVector : Vector2D) {
		for (int X : RowVector)
		{
			std::cout << X << " ";
		}
		std::cout << std::endl;
	}
	return;
}