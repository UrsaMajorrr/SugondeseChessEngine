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
#include "moving.h"
using namespace std;
#endif

void setPosition(Piece pieces[2], int initialIndex, int finalIndex) {
    for(int i=0; i < 2; i++) {
        if(pieces[i].getPiecePostion() == initialIndex) {
            cout << pieces[i].getPieceValue();
            //pieces[i].setPiecePosition(finalIndex);
        }
    }
}