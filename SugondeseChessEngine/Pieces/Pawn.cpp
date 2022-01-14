#include "Piece.cpp"
#include <iostream>
#include <string>
using namespace std;



class Pawn : public Piece {
public:
	bool isLegalMove() {
		std::cout << "This move may or may not be legal";
		return true;
	}
};