////////////////////////////////////////////////////////////////////////////////
//
//  File           : King.cpp
//  Description    : This class holds all the functions and variables of the king
//					 This is also the child class of Piece
//
//  Authors        : Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
//  Last Modified  : 1/13/2022 9:13 PM EST
//

//includes
#include "Piece.cpp"
#include <iostream>
#include <string>
using namespace std;




class King : public Piece {
public:
    //constructor
    King(int postion, COLOR color, bool isFirstMove) : Piece(0, postion, PieceType::KING, color, isFirstMove){};

    /*
	bool isLegalMove() {
		return true;
	}
    */
};