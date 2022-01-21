/*
Sugondese Chess Engine; version 1.0
Authors: Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
Contact Info:
kkc5441@psu.edu
nsm5313@psu.edu
qcn101@psu.edu
kfd5270@psu.edu
Start Date: 1/10/2022

Description: This file is the main file. Will run and execute the code.
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>
#include "Pieces/Piece.cpp"
#include "BoardNoah.cpp"

int main()
{
    Piece knight;
    Rook rook;
    BoardNoah board;
    knight.value = 3;
    knight.name = "n";
    rook.value = 3;

    std::string input = "RNBQKBNRPPPPPPPP________________________________pppppppprnbqkbnr";
    board.printBoard(input);

    /*
    Code below is a reference to how we may want to show our board. 
    However, it was taken from another project so might have to figure the rest out on our own. 
    Just a good start
    */

    
    //HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //how many cells in window
    //std::cout << "|";
    //SetConsoleTextAttribute(hConsole, 114);
    //std::cout << "    a  b  c  d  e  f  g  h    ";
    //SetConsoleTextAttribute(hConsole, 15);
    //std::cout << "|" << std::endl;
    
}

