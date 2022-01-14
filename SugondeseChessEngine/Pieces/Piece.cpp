////////////////////////////////////////////////////////////////////////////////
//
//  File           : Piece.cpp
//  Description    : This class holds all the functions and variables that pieces have in common.
//					 This is also the parent class for all other pieces
//
//  Authors        : Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
//  Last Modified  : 1/13/2022 8:22 PM EST
//

//Includes
#include <string>
#include <iostream>
using namespace std;

//Project Includes

//Implementation
class Piece {
public:
	int value;
    std::string name;
	int position;
	enum {WHITE = 0xFFFFFF, BLACK = 0x000000} color;
	bool isFirstMove;

	int getPieceValue() {
		return value;
	}

	string getPieceName() {
		return name;
	}

	int getPiecePostion(){
		return position;
	}

	int returnColor (){
		return color;
	}

	bool returnIsFirstMove(){
		return isFirstMove;
	}

	bool isLegalMove() {
		std::cout << "Move is legal";
		return true;
	}
};
