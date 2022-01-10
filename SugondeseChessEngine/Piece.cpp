/*
This class holds everything that pieces have in common.
*/

class Piece {
public:
	int value;
    std:: string name;

	int getPieceValue() {
		return value;
	}

	std::string getPieceName() {
		return name;
	}

	bool isLegalMove() {
		std::cout << "Move is legal";
		return true;
	}
};

class Pawn : public Piece {
public:
	bool isLegalMove() {
		std::cout << "This move may or may not be legal";
		return true;
	}
};

class Rook : public Piece {
public:
	bool isLegalMove() {
		return true;
	}
};