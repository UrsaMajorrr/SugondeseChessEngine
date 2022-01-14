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

//Project Includes

//Implementation
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
