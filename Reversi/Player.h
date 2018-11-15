#ifndef PLAYER_HEADER
#define PLAYER_HEADER
#include "Piece.h"
#include <string>

class Player {
public:
	Player(const std::string&, Piece);
	virtual ~Player();
	//getPiece gets defined in Piece.h as it is using the base class Piece
	//Piece Piece::getPiece() const;
	virtual void makeMove(Board&) = 0;
};

#endif