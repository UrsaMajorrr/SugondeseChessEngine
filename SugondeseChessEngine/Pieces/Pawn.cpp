#include "Piece.cpp"
#include <iostream>
#include <string>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
//  File           : Pawn.cpp
//  Description    : This class holds all the functions and variables of the pawn
//					 This is also the child class of Piece
//
//  Authors        : Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
//  Last Modified  : 1/13/2022 9:13 PM EST
//
class Pawn : public Piece
{
public:
    //Constructor
    Pawn( int postion, COLOR color, bool isFirstMove) : Piece(1, postion, PieceType::PAWN, color, isFirstMove){
    };

/*
    bool isLegalMove()
    {
        std::cout << "This move may or may not be legal";
        return true;
    }*/
};