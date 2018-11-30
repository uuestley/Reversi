#ifndef RANDOM_PLAYER_HEADER
#define RANDOM_PLAYER_HEADER
#include "ComputerPlayer.h"

// Class implements ComputerPlayer base class
class RandomPlayer : public ComputerPlayer {
	// This method makes the computer make a random
	// but legal move
	void makeMove();
};

#endif
