#include "Player.h"
#include <iostream>

using namespace std;

class Player {
public:
	string Name;
	Piece PieceColour;

	Player(const std::string& PlayerName, Piece PlayerPiece) {
		Name = PlayerName;
		PieceColour = PlayerPiece;
	}

	virtual ~Player() {

	}

	virtual void makeMove(Board&) {

	}
};