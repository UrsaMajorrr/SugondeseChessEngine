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
	//values
	int value;
    enum class PieceType: char {PAWN='P', ROOK='R', KNIGHT = 'N', BISHOP = 'B', KING = 'K', QUEEN = 'Q'} ;
	int position;
	PieceType pieceType;
	enum COLOR {WHITE = 0xFFFFFF, BLACK = 0x000000} ;
	COLOR color;
	bool isFirstMove;

	//constructor
	Piece(int value, int postion, PieceType pieceType, COLOR color, bool isFirstMove){
		value = value;
		position = position;
		pieceType = pieceType;
		color = color;
		isFirstMove = isFirstMove;
	}

	int getPieceValue() {
		return value;
	}

	PieceType getPieceType() {
		return pieceType;
	}

	int getPiecePostion(){
		return position;
	}

	COLOR getColor (){
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
