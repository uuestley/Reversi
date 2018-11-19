#ifndef PIECE_HEADER
#define PIECE_HEADER

// The class piece contains an enumerator and a member function
class Piece {
	// An enumerator which represents all possible states of an index on the board
	enum {LIGHT, DARK, EMPTY};

	// A member function which returns the type of piece that the
	// player who called the function has.
	Piece getPiece() const;
};

#endif