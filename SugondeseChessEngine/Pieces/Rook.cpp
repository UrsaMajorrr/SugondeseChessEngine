#include "Piece.cpp"
#include <iostream>
#include <string>
using namespace std;




class Rook : public Piece {
public:
	bool isLegalMove() {
		return true;
	}
};