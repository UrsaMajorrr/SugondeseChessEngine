#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <Windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "|";
    SetConsoleTextAttribute(hConsole, 114);
    std::cout << "    a  b  c  d  e  f  g  h    ";
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "|" << std::endl;
}