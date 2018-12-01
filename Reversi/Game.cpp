#include "Game.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "Piece.h"
#include <iostream>

using namespace std;

class Game {
public:

	Board* game;
	Player* playerOne;
	Piece* playerOnePiece = new Piece();
	Player* playerTwo;
	Piece* playerTwoPiece = new Piece();

	Game() {
		game = new Board();
		playerOne = NULL;
		playerTwo = NULL;
		playerOnePiece = Piece::LIGHT;
	}

	~Game() {
		
	}

	void selectPlayers() {
		int typeOne;
		int typeTwo;
		cout << "Is Player 1 human or computer? (reply '1' for human, reply '2' for computer)";
		cin >> typeOne;
		cout << "Is Player 2 human or computer? (reply '1' for human, reply '2' for computer)";
		cin >> typeTwo;
		switch (typeOne) {
		case 1:
			string temp;
			cout << "Enter the player's name: ";
			cin >> temp;
			const string& playerNameOne = temp;
			playerOne = new Player(playerNameOne, Piece::LIGHT);
			break;
		}
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

	}

	bool isRunning() {

	}
};