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

class Knight : public Piece {


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