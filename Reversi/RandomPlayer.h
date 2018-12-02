/*
 * Evan Nosich - 0354155
 * Mouhammed Gningue -
 */
#ifndef RANDOM_PLAYER_H_
#define RANDOM_PLAYER_H_
#include "ComputerPlayer.h"

// Class implements ComputerPlayer base class
class RandomPlayer : public ComputerPlayer {
	// This method makes the computer make a random
	// but legal move
	void makeMove();
};

#endif
