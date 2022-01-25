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
#include "Pieces/KnightNoahClass.cpp"
using namespace std;
#endif

bool isLegalKnightMove(Piece * knight, int finalIndex);

void setPosition(Piece * pieces[32], int initialIndex, int finalIndex) {
    for(int i=0; i < 32; i++) {
        if(pieces[i]->position == initialIndex) {
            pieces[i]->position = finalIndex;
        }
    }
}

bool isItYourPiece(Piece * initialPiece, bool isWhitesTurn) {
    if(isWhitesTurn == initialPiece->isBlack) {
        cout << "Invalid move! Not your piece." << "\n" << "Try again!" << "\n";
        return false;
    }
    else if(isWhitesTurn != initialPiece->isBlack) {
        return true;
    }
}

bool isYourPieceAlreadyThere(Piece * initialPiece, Piece * finalPiece, bool setInitial, bool setFinal) {
    if(!setInitial || !setFinal) {
        return true;
    }
    else if(setInitial && setFinal) {
        if(initialPiece->isBlack == finalPiece->isBlack) {
            cout << "\n" << "Invalid move! One of your pieces is already there." << "\n" << "Try again!" << "\n";
            return false;
        }
        else {
            return true;
        }
    }
}

bool isThereAPieceThere(bool setInitial) {
    if(setInitial == 0) {
        cout << "Invalid move! The space you chose is empty." << "\n" << "Try again!" << "\n";
        return false;
    }
    return true;
}

bool specificPieceLegalMove(Piece * piece, int finalIndex) {
    bool isLegal = true;
    if(piece->pieceType == "N") {
        isLegal = isLegalKnightMove(piece, finalIndex);
    }
    return isLegal;
}

bool basicLegalMove(Piece * pieces[32], int initialIndex, int finalIndex, bool isWhitesTurn) {
    bool setInitial = false;
    bool setFinal = false;
    Piece * initialPiece;
    Piece * finalPiece;
    for(int i=0; i < 32; i++) {
        if(pieces[i]->position == initialIndex) {
            initialPiece = pieces[i];
            setInitial = true;
        }
        if(pieces[i]->position == finalIndex) {
            finalPiece = pieces[i];
            setFinal = true;
        }
    }
    bool a = isThereAPieceThere(setInitial);
    if(!a) {
        return false;
    }

    bool b = isItYourPiece(initialPiece, isWhitesTurn);
    bool c = isYourPieceAlreadyThere(initialPiece, finalPiece, setInitial, setFinal);
    bool d = specificPieceLegalMove(initialPiece, finalIndex);
    
    return a & b & c & d;
    
}