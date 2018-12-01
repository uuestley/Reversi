#include "Board.h"
#include "ComputerPlayer.h"
#include "Game.h"
#include "HumanPlayer.h"
#include "Move.h"
#include "NullMove.h"
#include "Piece.h"
#include "Player.h"
#include "RandomPlayer.h"
#include "ReversiTester.h"

class ReversiTester {
	int main() {
		Game* reversiGame = new Game();
		reversiGame->selectPlayers;
		reversiGame->play;
	}
};