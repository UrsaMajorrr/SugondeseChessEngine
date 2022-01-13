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
using namespace std;


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
/*
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
*/

int main() {
    //namespace rs = ranges;
    //namespace rv = ranges::views;
    string input = "RNBQKBNRPPPPPPPP________________________________pppppppprnbqkbnr";
    //auto board = input | rv::intersperse(' ') | rs::to<std::string>;
    string end = "\n";
    cout << board.substr(0,8) + end;
    cout << board.substr(8,8) + end;
    cout << board.substr(16,8) + end;
    cout << board.substr(24,8) + end;
    cout << board.substr(32,8) + end;
    cout << board.substr(40,8) + end;
    cout << board.substr(48,8) + end;
    cout << board.substr(56,8) + end;
}