/*
Sugondese Chess Engine; version 1.0
Authors: Kade Carlson, Noah Muthler, Quintin Nelson, Kevin Dong
Contact Info:
kkc5441@psu.edu
nsm5313@psu.edu
qcn101@psu.edu
kfd5270@psu.edu
Start Date: 1/10/2022
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;

string spaced( string str )
{
   if ( str == "" ) return str;
   
   string result( 2 * str.size() - 1, ' ' );
   for ( int i = 0, j = 0; i < str.size(); i++, j+=2 ) result[j] = str[i];
   return result;
}

void printBoard(string input) {
    string board = spaced(input);
    string end = "\n";
    cout << board.substr(0,16) + end;
    cout << board.substr(16,16) + end;
    cout << board.substr(32,16) + end;
    cout << board.substr(48,16) + end;
    cout << board.substr(64,16) + end;
    cout << board.substr(80,16) + end;
    cout << board.substr(96,16) + end;
    cout << board.substr(112,16) + end;
}

int main() {
    string input = "RNBQKBNRPPPPPPPP________________________________pppppppprnbqkbnr";
    printBoard(input);
}