/*
Sugondese Chess Engine; version 1.0
Authors: Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
Contact Info:
kkc5441@psu.edu
nsm5313@psu.edu
qcn101@psu.edu
kfd5270@psu.edu
Start Date: 1/10/2022

Description: This class describes the possible movements of the knight
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

string deleteMove(string moveString, string move);
string setErrorPair(Piece * knight);
string setLegalMoves(string errorPair);
bool isLegalKnightMove(Piece * knight, int finalIndex);



string deleteMove(string moveStr, string move) {  // "moveString" is the string containing possible moves and "move" is the move to delete
	string moveString = moveStr;
	int startPos = moveString.find(move);
	if(startPos != string::npos) {
		int strLen = moveString.length();
		if(startPos == (strLen - 4)) {
			moveString.erase(startPos-1, 5);
		}
		else {
			moveString.erase(startPos, 5);
		}
	}
	return moveString;
}

string setErrorPair(Piece * knight) {
	int position = knight->position;
	string errorPair = "00";
	if((position >= 18 && position <= 21) || (position >= 26 && position <= 29) || (position >= 34 && position <= 37) || (position >= 42 && position <= 45)) {
		errorPair = "00"; // no error, all moves are legal
	}
	if(position == 0) {
		errorPair = "11";
	}
	if(position == 1) {
		errorPair = "12";
	}
	if(position >= 2 && position <= 5) {
		errorPair = "10";
	}
	if(position == 6) {
		errorPair = "13";
	}
	if(position == 7) {
		errorPair = "14";
	}
	if(position == 8) {
		errorPair = "21";
	}
	if(position == 9) {
		errorPair = "22";
	}
	if(position >= 10 && position <= 13) {
		errorPair = "20";
	}
	if(position == 14) {
		errorPair = "23";
	}
	if(position == 15) {
		errorPair = "24";
	}
	if(position == 16 || position == 24 || position == 32 || position == 40) {
		errorPair = "01";
	}
	if(position == 17 || position == 25 || position == 33 || position == 41) {
		errorPair = "02";
	}
	if(position == 22 || position == 30 || position == 38 || position == 46) {
		errorPair = "03";
	}
	if(position == 23 || position == 31 || position == 39 || position == 47) {
		errorPair = "04";
	}
	if(position == 48) {
		errorPair = "31";
	}
	if(position == 49) {
		errorPair = "32";
	}
	if(position >= 50 && position <= 53) {
		errorPair = "30";
	}
	if(position == 54) {
		errorPair = "33";
	}
	if(position == 55) {
		errorPair = "34";
	}
	if(position == 56) {
		errorPair = "41";
	}
	if(position == 57) {
		errorPair = "42";
	}
	if(position >= 58 && position <= 61) {
		errorPair = "40";
	}
	if(position == 62) {
		errorPair = "43";
	}
	if(position == 63) {
		errorPair = "44";
	}
	return errorPair;
}

string setLegalMoves(string errorPair) {
	string legalMoves = "u2r1/u2l1/l2u1/l2d1/r2u1/r2d1/d2r1/d2l1";
	string row = errorPair.substr(0,1);
	string col = errorPair.substr(1,1);
	if (row == "1") {
		legalMoves = deleteMove(legalMoves, "u2r1");
		legalMoves = deleteMove(legalMoves, "u2l1");
		legalMoves = deleteMove(legalMoves, "l2u1");
		legalMoves = deleteMove(legalMoves, "r2u1");
	}
	if (row == "2") {
		legalMoves = deleteMove(legalMoves, "u2r1");
		legalMoves = deleteMove(legalMoves, "u2l1");
	}
	if (row == "3") {
		legalMoves = deleteMove(legalMoves, "d2r1");
		legalMoves = deleteMove(legalMoves, "d2l1");
	}
	if (row == "4") {
		legalMoves = deleteMove(legalMoves, "d2r1");
		legalMoves = deleteMove(legalMoves, "d2l1");
		legalMoves = deleteMove(legalMoves, "r2d1");
		legalMoves = deleteMove(legalMoves, "l2d1");
	}
	if (col == "1") {
		legalMoves = deleteMove(legalMoves, "u2l1");
		legalMoves = deleteMove(legalMoves, "l2u1");
		legalMoves = deleteMove(legalMoves, "l2d1");
		legalMoves = deleteMove(legalMoves, "d2l1");
	}
	if (col == "2") {
		legalMoves = deleteMove(legalMoves, "l2u1");
		legalMoves = deleteMove(legalMoves, "l2d1");
	}
	if (col == "3") {
		legalMoves = deleteMove(legalMoves, "r2u1");
		legalMoves = deleteMove(legalMoves, "r2d1");
	}
	if (col == "4") {
		legalMoves = deleteMove(legalMoves, "r2u1");
		legalMoves = deleteMove(legalMoves, "r2d1");
		legalMoves = deleteMove(legalMoves, "u2r1");
		legalMoves = deleteMove(legalMoves, "d2r1");
	}
	return legalMoves;
}

bool isLegalKnightMove(Piece * knight, int finalIndex) {
	string errorPair = setErrorPair(knight);
	string moveStr = setLegalMoves(errorPair);
	int position = knight->position;
	if((moveStr.find("u2r1")) != string::npos) {
		if(finalIndex == position - 15) {
			return true;
		}
	}
	if((moveStr.find("u2l1")) != string::npos) {
		if(finalIndex == position - 17) {
			return true;
		}
	}

	if((moveStr.find("l2u1")) != string::npos) {
		if(finalIndex == position - 10) {
			return true;
		}
	}

	if((moveStr.find("l2d1")) != string::npos) {
		if(finalIndex == position + 6) {
			return true;
		}
	}

	if((moveStr.find("r2u1")) != string::npos) {
		if(finalIndex == position - 6) {
			return true;
		}
	}

	if(((moveStr.find("r2d1")) != string::npos) && (finalIndex == position + 10)) {
		if(finalIndex == position + 10) {
			return true;
		}
	}

	if(((moveStr.find("d2r1")) != string::npos) && (finalIndex == position + 17)) {
		return true;

	}

	if((moveStr.find("d2l1")) != string::npos) {
		if(finalIndex == position + 15) {
			return true;
		}
	}
	cout << "\n" << "Illegal move! Out of knight's bounds. Here are is a list of possible moves: " << moveStr;

	return false;
}
