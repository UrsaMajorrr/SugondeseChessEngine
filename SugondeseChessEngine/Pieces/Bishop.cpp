////////////////////////////////////////////////////////////////////////////////
//
//  File           : Bishop.cpp
//  Description    : This class holds all the functions and variables of the bishop
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




class Bishop : public Piece {
public:
    //constructor
    Bishop(int postion, COLOR color, bool isFirstMove) : Piece(3, postion, PieceType::BISHOP, color, isFirstMove){};

    /*
	bool isLegalMove() {
		return true;
	}
    */
};