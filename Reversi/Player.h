#ifndef PLAYER_HEADER
#define PLAYER_HEADER
class Player{
public:
	Player(const &string, Piece);
	virtual ~Player();
	getPiece() const;
	virtual void makeMove(Board&) = 0;
}
#endif