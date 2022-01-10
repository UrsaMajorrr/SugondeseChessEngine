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
    Piece knight;
    Rook rook;
    knight.value = 3;
    knight.name = "n";
    rook.value = 3;
    std::cout << knight.getPieceValue() << "\n";
    std::cout << knight.getPieceName();
}

