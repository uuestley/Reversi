#ifndef HUMAN_PLAYER_HEADER
#define HUMAN_PLAYER_HEADER
#include "Player.h"

// A class derived from the class Player
class HumanPlayer : public Player {
	// Prompts the user for the position where they want to place their piece
	void makeMove();
};

#endif
