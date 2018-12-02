/*
 * Evan Nosich - 0354155
 * Mouhammed Gningue -
 */
#ifndef REVERSI_TESTER_H_
#define REVERSI_TESTER_H_
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

// Main method creates a Game object and calls
// Game::selectPlayers(), Game::play(), and Game::announceWinner().
int main();

Game* returnGame();




#endif