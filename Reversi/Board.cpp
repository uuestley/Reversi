#include "Board.h"
#include <iostream>
using namespace std;
void Board::reset() {
	Board::board;
	for (int row = 0; row < 8; ++row) {
		for (int column = 0; column < 8; ++column) {
			board[row * 8 + column] = 0;
		}
	}
}

void Board::display() const {
	for (int row = 0; row < 8; ++row) {
		for (int column = 0; column < 8; ++column) {
			cout << board[row * 8 + column];
		}
	}
}

void Board::makeMove(Piece rev, Move mv) {
	
}
Move Board::getMove(int index) const {
	Move target = index;
	return board[target];
}