/*
Sugondese Chess Engine; version 1.0
Authors: Kade Carlson, Noah Muthler, Quintin Nelson
Contact Info:
kkc5441@psu.edu
nsm5313@psu.edu
qcn101@psu.edu
Start Date: 1/10/2022
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>

/*
int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "|";
    SetConsoleTextAttribute(hConsole, 114);
    std::cout << "    a  b  c  d  e  f  g  h    ";
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "|" << std::endl;
}
*/
int main() {
    char board[] = "RNBQKBNRPPPPPPPP________________________________pppppppprnbqkbnr";
    char temp[8];
    for(int i=0; i<8; i++) {
        for(int j=0; j < 8; j++) {
            temp[j] = board[j*8 + i];
        }
        std::cout << temp;
        std::cout << "\n";
    }
}
