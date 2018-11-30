#ifndef REVERSI_TESTER_HEADER
#define REVERSI_TESTER_HEADER
#include "Board.h"
#include "ComputerPlayer.h"
#include "Game.h"
#include "HumanPlayer.h"
#include "Move.h"
#include "NullMove.h"
#include "Piece.h"
#include "Player.h"
#include "RandomPlayer.h"

// The tester class
class ReversiTester {
	// Main method creates a Game object and calls
	// Game::selectPlayers(), Game::play(), and Game::announceWinner().
	int main();
};

#endif