/*
 * Evan Nosich - 0354155
 * Mouhammed Gningue -
 */
#include "RandomPlayer.h"
#include "Board.h"
#include "Game.h"
#include "ReversiTester.h"

#include <vector>

using namespace std;

class RandomPlayer : public ComputerPlayer {
	
	vector<Move> validMoves;
	
	void makeMove() {
		genValidMoves();
	}

	void genValidMoves() {
		for (int i = 0; i < 64; i++) {

		}
	}
};