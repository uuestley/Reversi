/*
 * Evan Nosich - 0354155
 * Mouhammed Gningue -
 */
#include "Player.h"
#include <iostream>

using namespace std;

class Player {
public:
	string Name;
	Piece PieceColour;

	Player(const string& PlayerName, Piece PlayerPiece) {
		Name = PlayerName;
		PieceColour = PlayerPiece;
	}

	virtual ~Player() {

	}

	virtual void makeMove(Board&) {

	}
};