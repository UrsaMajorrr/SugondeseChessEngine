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

void setPosition(Piece * pieces[32], int initialIndex, int finalIndex) {
    for(int i=0; i < 32; i++) {
        if(pieces[i]->position == initialIndex) {
            //cout << pieces[i].value;
            pieces[i]->position = finalIndex;
        }
    }
}

