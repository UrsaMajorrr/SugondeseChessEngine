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

#ifndef HEADER_INCLUEDS
#define HEADER_INCLUEDS
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "Pieces/Piece.cpp"
#include "BoardNoah.cpp"
#include "Moving.cpp"
#include "moving.h"
using namespace std;
#endif

/*
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>
#include "Pieces/Piece.cpp"
#include "BoardNoah.cpp"
#include "Moving.cpp"
*/

int main()
{
    Piece knight = Piece(3, 1, false, true);
    Piece pawn = Piece(1, 8, false, true);
    Piece pieces[] = {knight, pawn};
    std::string input = "RNBQKBNRPPPPPPPP________________________________pppppppprnbqkbnr";

    //printBoard(input);
    //int x = readInitialIndex();
    //int y = readFinalIndex();
    cout << knight.getAlive();
    //cout << x << "\n" << y;
    //setPosition(pieces, 1, 3);
    //cout << knight.getPiecePostion() << "\n" << pawn.getPiecePostion();
}

