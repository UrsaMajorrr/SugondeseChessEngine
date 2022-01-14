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

#include "Piece.cpp"
#include <string>
#include <iostream>
using namespace std;

class Knight : public Piece {
	string errorPair; // two character string (row/colomn)
	
	
	void setErrorPair() {
		if((position >= 18 && position <= 21) || (position >= 26 && position <= 29) || (position >= 34 && position <= 37) || (position >= 42 && position <= 45)) {
			errorPair = "00"; // no error, all moves are legal
		}
		if(position == 0) {
			errorPair == "11";
		}
		if(position==1) {
			errorPair == "12";
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
	}
	
	string * setLegalMoves() {
		string legalMoves[16] = {"u2r1","u2l1","u1r2","u1l2","l2u1","l2d1","l1u2","l1d2", "r2u1","r2d1","r1u2", "r1d2", "d2r1", "d2l1", "d1r2", "d1l2"};
		
		return legalMoves;
	}
	bool legalKnightMove(int index) {

	}

	bool isLegalMove() {
		std::cout << "This move may or may not be legal";
		return true;
	}
};




int main() {
    Knight knight;
    knight.name = "knight";
    knight.value = 4;
}