#ifndef GAME_HEADER
#define GAME_HEADER
#include "Board.h"
#include "Player.h"
class Game {
public:
	Game();
	~Game();
	void selectPlayers();
	Player* nextPlayer();
	void play();
	void announceWinner();
};
#endif
