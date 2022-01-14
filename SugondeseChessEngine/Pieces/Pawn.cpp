#include "Piece.cpp"
#include <iostream>
#include <string>
using namespace std;

class Pawn : public Piece
{
public:
    //Constructor
    Pawn( int postion, COLOR color, bool isFirstMove) : Piece(1, postion, PieceType::PAWN, color, isFirstMove){
    };
    
    bool isLegalMove()
    {
        std::cout << "This move may or may not be legal";
        return true;
    }
};