#ifndef COMPUTER_PLAYER_HEADER
#define COMPUTER_PLAYER_HEADER
#include "Piece.h"
#include "Player.h"

// An abstract base class derived from the class Player
class ComputerPlayer : public Player {
public:
	// Generates the player's name and passes it to the base class constructor
	ComputerPlayer(Piece);
};

#endif
