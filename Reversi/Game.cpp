#include "Game.h"
#include <iostream>
using namespace std;
class Game {
public:
	Board game;
	Player* player1;
	Player* player2;
	Game() {

	}

	~Game() {

	}

	void selectPlayers() {
		int type1;
		int type2;
		cout << "Is Player 1 human or computer? (reply '1' for human, reply '2' for computer)";
		cin >> type1;
		cout << "Is Player 2 human or computer? (reply '1' for human, reply '2' for computer)";
		cin >> type2;
		/*
		switch (type1) {
		case 1:
			break;
		}
		*/
	}

	Player* nextPlayer() const {

	}

	void play() {
		/*
		int temp;
		while (isRunning) {
			cin >> temp;
			Board::makeMove(Piece::LIGHT, temp);
		}
		*/
	}

	void announceWinner() {
		cout << "End of game!";
		Board::getWinner();
	}
	bool isRunning() {

	}
};