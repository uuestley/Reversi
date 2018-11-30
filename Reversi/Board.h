#ifndef BOARD_HEADER
#define BOARD_HEADER
#include "Piece.h"
#include "Move.h"
class Board {
    int board[8*8];
public:
	Board();
	void reset();
	void display() const;
	void makeMove(Piece, Move);
	bool isLegal(Piece, Move);
	Piece getWinner() const;
	Piece getPlayer() const;
	void genMoves() const;
	int numMoves() const;
	Move getMove(int) const;
};
#endif