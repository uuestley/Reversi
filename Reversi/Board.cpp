#include "Board.h"
#include "Piece.h"
#include "Move.h"
#include <iostream>

using namespace std;

class Board {
public:

	enum Piece { LIGHT, DARK, EMPTY };

	// Create a board using the defined area
	Piece gameBoard[BOARD_AREA];

	// Default constructor that initializes the board by calling the member function reset()
	Board() {
		reset();
	}

	// Erases all pieces from the board and sets up a standard game
	void reset() {
		// Loop through the entire board
		for (int i = 0; i < BOARD_AREA; ++i) {
			// Light pieces start on coordinates d4 and e5, or in this case index 27 and 36
			if (i == 27 || i == 36) {
				gameBoard[i] = LIGHT;
			}
			// Dark pieces start on coordinates e4 and d5, or in this case index 28 and 35
			else if (i == 28 || i == 35) {
				gameBoard[i] = DARK;
			}
			// All other game squares start off empty
			else {
				gameBoard[i] = EMPTY;
			}
		}
	}

	void display() const {
		for (int i = 0; i < BOARD_Y; ++i) {
			for (int j = 0; j < BOARD_X; ++j) {
				char tempChar;
				switch () {
				case EMPTY:
					tempChar = '-';
					break;
				case LIGHT:
					tempChar = 'L';
					break;
				case DARK:
					tempChar = 'D';
					break;
				}
			}
		}
	}

	void makeMove(Piece PieceToMove, Move MoveToMake) {
		gameBoard[MoveToMake] = PieceToMove;
	}

	bool isLegal(Piece PieceToCheck, Move MoveToCheck) const {
		if (gameBoard[MoveToCheck] == EMPTY) {
			if (gameBoard[MoveToCheck - 9] != EMPTY || gameBoard[MoveToCheck - 8] != EMPTY || gameBoard[MoveToCheck - 7] != EMPTY) {
				if (gameBoard[MoveToCheck - 9] != PieceToCheck || gameBoard[MoveToCheck - 8] != PieceToCheck || gameBoard[MoveToCheck - 7] != PieceToCheck)
					return true;
			}
			else if (gameBoard[MoveToCheck - 1] != EMPTY || gameBoard[MoveToCheck + 1] != EMPTY) {
				if (gameBoard[MoveToCheck - 1] != PieceToCheck || gameBoard[MoveToCheck + 1] != PieceToCheck)
					return true;
			}
			else if (gameBoard[MoveToCheck + 7] != EMPTY || gameBoard[MoveToCheck + 8] != EMPTY || gameBoard[MoveToCheck + 9] != EMPTY) {
				if (gameBoard[MoveToCheck + 7] != PieceToCheck || gameBoard[MoveToCheck + 8] != PieceToCheck || gameBoard[MoveToCheck + 9] != PieceToCheck)
					return true;
			}
			return false;

		}
		return false;
	}

	Piece getWinner() const {

	}

	Piece getPlayer() const {

	}

	void genMoves() {

	}

	int numMoves() const {
		int count = 0;
		for (int i = 0; i < BOARD_AREA; ++i)
			if (isLegal(gameBoard[i], i))
				count++;
		return count;
	}

	Move getMove(int MoveToReturn) const {
		return gameBoard[MoveToReturn];
	}
};