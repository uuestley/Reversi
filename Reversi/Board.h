#ifndef BOARD_HEADER
#define BOARD_HEADER
#include "Piece.h"
#include "Move.h"

// This class represents the current state of the board.
class Board {
public:
	// Default constructor that initializes the board by calling the member function reset()
	Board();

	// Erases all pieces from the board
	void reset();

	// Displays the board
	void display() const;

	// Executes the move indicated by the function parameters and calls
	void makeMove(Piece, Move);

	// Checks whether it is legal to place the given Piece on the square named by the second parameter
	bool isLegal(Piece, Move) const;

	// Returns the color of the winning side. If nobody has won yet, the function returns EMPTY
	Piece getWinner() const;

	// Returns the color of the Player whose turn it is
	Piece getPlayer() const;

	// Generates a list of moves that are possible in the current position (usually called by the makeMove() function)
	void genMoves();

	// Returns the number of valid moves
	int numMoves() const;

	// Returns the move specified by the integer parameter
	Move getMove(int) const;
};

#endif