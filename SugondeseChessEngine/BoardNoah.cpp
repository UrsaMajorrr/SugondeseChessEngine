/*
Sugondese Chess Engine; version 1.0
Authors: Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
Contact Info:
kkc5441@psu.edu
nsm5313@psu.edu
qcn101@psu.edu
kfd5270@psu.edu
Start Date: 1/10/2022

Description: This file holds all the functionality that has to do with the board.
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


string spaced(string str)
{
    if (str == "") return str;
    string result(2 * str.size() - 1, ' ');
    for (int i = 0, j = 0; i < str.size(); i++, j += 2) result[j] = str[i];
    return result;
}

void printBoard(string input) {
    string board = spaced(input);
    string end = "\n";
    cout << board.substr(0, 16) + end;
    cout << board.substr(16, 16) + end;
    cout << board.substr(32, 16) + end;
    cout << board.substr(48, 16) + end;
    cout << board.substr(64, 16) + end;
    cout << board.substr(80, 16) + end;
    cout << board.substr(96, 16) + end;
    cout << board.substr(112, 16) + end;
}

int readInitialIndex() { // reads which piece at a certain position the user wants to move and returns the index
    string location;
    cout << "Which piece would you like to move? (Board position) ";
    getline(cin, location);
    int index;
    int col = location.at(0);
    int rowASCII = (int) location.at(1);
    int row;
    switch(rowASCII) {
        case 49: row = 1; break;
        case 50: row = 2; break;
        case 51: row = 3; break;
        case 52: row = 4; break;
        case 53: row = 5; break;
        case 54: row = 6; break;
        case 55: row = 7; break;
        case 56: row = 8; break;
        case 57: row = 9; break;
    }
    

    int aCol[] = {0, 8, 16, 24, 32, 40, 48, 56};
    int bCol[] = {1, 9, 17, 25, 33, 41, 49, 57};
    int cCol[] = {2, 10, 18, 26, 34, 42, 50, 58};
    int dCol[] = {3, 11, 19, 27, 35, 43, 51, 59};
    int eCol[] = {4, 12, 20, 28, 36, 44, 52, 60};
    int fCol[] = {5, 13, 21, 29, 37, 45, 53, 61};
    int gCol[] = {6, 14, 22, 30, 38, 46, 54, 62};
    int hCol[] = {7, 15, 23, 31, 39, 47, 55, 63};

   if(col == 97) {
        index = aCol[row - 1];
    }
    if(col == 98) {
        index = bCol[row - 1];
    }
    if(col == 99) {
        index = cCol[row - 1];
    }
    if(col == 100) {
        index = dCol[row - 1];
    }
    if(col == 101) {
        index = eCol[row - 1];
    }
    if(col == 102) {
        index = fCol[row - 1];
    }
    if(col == 103) {
        index = gCol[row - 1];
    }
    if(col == 104) {
        index = hCol[row - 1];
    }

    return index;
} 

int readFinalIndex() {
    string location;
    cout << "Where do you want to move this piece? (Board position) ";
    getline(cin, location);
    int index;
    int col = location.at(0);
    int rowASCII = (int) location.at(1);
    int row;
    switch(rowASCII) {
        case 49: row = 1; break;
        case 50: row = 2; break;
        case 51: row = 3; break;
        case 52: row = 4; break;
        case 53: row = 5; break;
        case 54: row = 6; break;
        case 55: row = 7; break;
        case 56: row = 8; break;
        case 57: row = 9; break;
    }
    

    int aCol[] = {0, 8, 16, 24, 32, 40, 48, 56};
    int bCol[] = {1, 9, 17, 25, 33, 41, 49, 57};
    int cCol[] = {2, 10, 18, 26, 34, 42, 50, 58};
    int dCol[] = {3, 11, 19, 27, 35, 43, 51, 59};
    int eCol[] = {4, 12, 20, 28, 36, 44, 52, 60};
    int fCol[] = {5, 13, 21, 29, 37, 45, 53, 61};
    int gCol[] = {6, 14, 22, 30, 38, 46, 54, 62};
    int hCol[] = {7, 15, 23, 31, 39, 47, 55, 63};

   if(col == 97) {
        index = aCol[row - 1];
    }
    if(col == 98) {
        index = bCol[row - 1];
    }
    if(col == 99) {
        index = cCol[row - 1];
    }
    if(col == 100) {
        index = dCol[row - 1];
    }
    if(col == 101) {
        index = eCol[row - 1];
    }
    if(col == 102) {
        index = fCol[row - 1];
    }
    if(col == 103) {
        index = gCol[row - 1];
    }
    if(col == 104) {
        index = hCol[row - 1];
    }

    return index;
}


//int main() {
//    string input = "RNBQKBNRPPPPPPPP________________________________pppppppprnbqkbnr";
//    printBoard(input);
//}