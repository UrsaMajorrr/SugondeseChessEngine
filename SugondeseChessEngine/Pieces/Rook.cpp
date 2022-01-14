////////////////////////////////////////////////////////////////////////////////
//
//  File           : Rook.cpp
//  Description    : This class holds all the functions and variables of the rook
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




class Rook : public Piece {
public:
    //constructor
    Rook(int postion, COLOR color, bool isFirstMove) : Piece(5, postion, PieceType::ROOK, color, isFirstMove){};

	bool isLegalMove() {
		return true;
	}
};