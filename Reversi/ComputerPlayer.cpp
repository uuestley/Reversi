/*
 * Evan Nosich - 0354155
 * Mouhammed Gningue -
 */
#include "ComputerPlayer.h"
#include <iostream>;
#include <string>
using namespace std;

class ComputerPlayer : public Player {
public:
	char a = 'A';
	ComputerPlayer(Piece PlayersPiece) {
		string currentComp = "Computer " + a;
		a++;
		Player* currentComp;
	}
};