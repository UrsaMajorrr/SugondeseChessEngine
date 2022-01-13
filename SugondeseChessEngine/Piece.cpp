/*
Sugondese Chess Engine; version 1.0
Authors: Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
Contact Info:
kkc5441@psu.edu
nsm5313@psu.edu
qcn101@psu.edu
kfd5270@psu.edu
Start Date: 1/10/2022

Description: This class holds all the functions and variables that pieces have in common.
*/

class Piece {
public:
	int value;
    std::string name;

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