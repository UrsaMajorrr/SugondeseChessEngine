/*
Sugondese Chess Engine; version 1.0
Authors: Kade Carlson, Noah Muthler, Quintin Nelson
Contact Info:
kkc5441@psu.edu
nsm5313@psu.edu
qcn101@psu.edu
Start Date: 1/10/2022
*/

#include <iostream>
#include "Piece.cpp"

int main()
{
    Piece knight(3, "knight");

    std::cout << "Hello World!\n";
    std::cout << knight.getPieceValue();
    std::cout << knight.getPieceName();
}

