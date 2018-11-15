#ifndef PIECE_HEADER
#define PIECE_HEADER

class Piece {
	enum {LIGHT, DARK, EMPTY};
	Piece getPiece() const;
};

#endif