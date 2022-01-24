////////////////////////////////////////////////////////////////////////////////
//
//  File           : Piece.cpp
//  Description    : This class holds all the functions and variables that pieces have in common.
//					 This is also the parent class for all other pieces
//
//  Authors        : Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
//  Last Modified  : 1/13/2022 9:13 PM EST
//

//Includes
#include <string>
#include <iostream>
using namespace std;

//Project Includes

//Implementation
class Piece
{
public:
	//values
	int value;
	bool alive;
	int position;
	bool isFirstMove;
	bool isBlack;
	string pieceType;
	
	//constructor
	Piece(int value_constr, int position_constr, bool isFirstMove_constr, bool alive_constr, bool isBlack_constr, string pieceType_constr) {
		value = value_constr;
		position = position_constr;
		isFirstMove = isFirstMove_constr;
		alive = alive_constr;
		isBlack = isBlack_constr;
		pieceType = pieceType_constr;
	}
};
