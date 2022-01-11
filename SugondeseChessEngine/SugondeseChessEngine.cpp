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
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>
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


    /*Code below is a reference to how we may want to show our board. 
    However, it was taken from another project so might have to figure the rest out on our own. just a good start*/

    /*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "|";
    SetConsoleTextAttribute(hConsole, 114);
    std::cout << "    a  b  c  d  e  f  g  h    ";
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "|" << std::endl;*/
}

