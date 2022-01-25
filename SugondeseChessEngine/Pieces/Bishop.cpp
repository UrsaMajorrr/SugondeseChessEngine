////////////////////////////////////////////////////////////////////////////////
//
//  File           : Bishop.cpp
//  Description    : This class holds all the functions and variables of the bishop
//					 This is also the child class of Piece
//
//  Authors        : Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
//  Last Modified  : 1/13/2022 9:13 PM EST
//

#ifndef HEADER_INCLUEDS
#define HEADER_INCLUEDS
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath> 
#include "Piece.cpp"
using namespace std;
#endif

// way 1
// -
//   -
//     -
//       -
//         -

// way 2
//          -
//        -
//       -
//      -
//     -
//    -


// need to add boundry issues

bool wayOne(Piece * pieces[32], Piece * bishop, int finalIndex) { // way one direction are 9 apart
    int position = bishop->position;
    int moveLen = abs(finalIndex - position);
    int iterationLen;

    if((moveLen) % 9 == 0)  {
        for(int i=0; i < 32; i++) {
            iterationLen = abs(pieces[i]->position - position);
            if(iterationLen % 9 == 0) {
                if((iterationLen < moveLen) && (iterationLen != 0)) {
                    cout << "Illegal move! A piece is blocking that move. Try again.";
                    return false;
                }
            }
            
        }
    }
    return true;
}

bool wayTwo(Piece * pieces[32], Piece * bishop, int finalIndex) { // way one direction are 9 apart
    int position = bishop->position;
    int moveLen = abs(finalIndex - position);
    int iterationLen;

    if((moveLen) % 7 == 0)  {
        for(int i=0; i < 32; i++) {
            iterationLen = abs(pieces[i]->position - position);
            if(iterationLen % 7 == 0) {
                if((iterationLen < moveLen) && (iterationLen != 0)) {
                    cout << "Illegal move! A piece is blocking that move. Try again.";
                    return false;
                }
            }
            
        }
    }
    return true;
}

bool isLegalBishopMove(Piece * pieces[32], Piece * bishop, int finalIndex) {
    return (wayOne(pieces, bishop, finalIndex) | wayTwo(pieces, bishop, finalIndex));
}