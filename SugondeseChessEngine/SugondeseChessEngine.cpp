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
    Piece rook1_w = Piece(5, 0, false, true, false);
    Piece knight1_w = Piece(3, 1, false, true, false);
    Piece bishop1_w = Piece(3, 2, false, true, false);
    Piece queen_w = Piece(9, 3, false, true, false);
    Piece king_w = Piece(900, 4, false, true, false);
    Piece bishop2_w = Piece(3, 5, false, true, false);
    Piece knight2_w = Piece(3, 6, false, true, false);
    Piece rook2_w = Piece(5, 7, false, true, false);
    Piece pawn1_w = Piece(1, 8, false, true, false);
    Piece pawn2_w = Piece(1, 9, false, true, false);
    Piece pawn3_w = Piece(1, 10, false, true, false);
    Piece pawn4_w = Piece(1, 11, false, true, false);
    Piece pawn5_w = Piece(1, 12, false, true, false);
    Piece pawn6_w = Piece(1, 13, false, true, false);
    Piece pawn7_w = Piece(1, 14, false, true, false);
    Piece pawn8_w = Piece(1, 15, false, true, false);

    Piece pawn1_b = Piece(1, 48, false, true, true);
    Piece pawn2_b = Piece(1, 49, false, true, true);
    Piece pawn3_b = Piece(1, 50, false, true, true);
    Piece pawn4_b = Piece(1, 51, false, true, true);
    Piece pawn5_b = Piece(1, 52, false, true, true);
    Piece pawn6_b = Piece(1, 53, false, true, true);
    Piece pawn7_b = Piece(1, 54, false, true, true);
    Piece pawn8_b = Piece(1, 55, false, true, true);
    Piece rook1_b = Piece(5, 56, false, true, true);
    Piece knight1_b = Piece(3, 57, false, true, true);
    Piece bishop1_b = Piece(3, 58, false, true, true);
    Piece queen_b = Piece(9, 59, false, true, true);
    Piece king_b = Piece(900, 60, false, true, true);
    Piece bishop2_b = Piece(3, 61, false, true, true);
    Piece knight2_b = Piece(3, 62, false, true, true);
    Piece rook2_b = Piece(5, 63, false, true, true);
    
    Piece *pieces[] = {&rook1_w, &knight1_w, &bishop1_w, &queen_w, &king_w, &bishop2_w, &knight2_w, &rook2_w, &pawn1_w, &pawn2_w, &pawn3_w, &pawn4_w, &pawn5_w, &pawn6_w, &pawn7_w, &pawn8_w, &rook1_b, &knight1_b, &bishop1_b, &queen_b, &king_b, &bishop2_b, &knight2_b, &rook2_b, &pawn1_b, &pawn2_b, &pawn3_b, &pawn4_b, &pawn5_b, &pawn6_b, &pawn7_b, &pawn8_b};
    std::string input = "rnbqkbnrpppppppp________________________________PPPPPPPPRNBQKBNR";
    bool isWhitesTurn = true;
    while(1) {
        cout << "\n";
        printWhosTurn(isWhitesTurn);
        printBoard(input);
        int x = readInitialIndex();
        int y = readFinalIndex();
        bool isLegal = legalMove(pieces, x, y, isWhitesTurn);
        if(isLegal) {
            setPosition(pieces, x, y);
            input = updateBoard(input, x, y);
            cout << "\n";
            isWhitesTurn = !isWhitesTurn;
        }
    }
}
