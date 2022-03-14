#include <iostream>
#include <string>
using namespace std;

#ifndef MY_HEADER
#define MY_HEADER

namespace ariel{
    void changeSymbol(char c1 , char c2 , char * current);
    string line(int row , int all_cols , char c1 , char c2);
    string mat(int col, int row, char c1, char c2);
};

#endif