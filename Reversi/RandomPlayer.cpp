#include "RandomPlayer.h"

class RandomPlayer : public ComputerPlayer {
	Board* game;
	Piece* piece;
	void makeMove() {
		float r = static_cast <float> (rand()) / static_cast <float> (64);
		if (game->isLegal(game, r))
			gameBoard[r] = piece; 

	}
};