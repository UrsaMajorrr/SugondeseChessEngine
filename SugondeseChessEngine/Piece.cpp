/*
This class holds everything that pieces have in common.
*/

class Piece {
public:
	int value;
	string name;

	Piece(int x, string y) {
		value = x;
		name = y;
	}

	int getPieceValue() {
		return value;
	}

	string getPieceName() {
		return name;
	}
};