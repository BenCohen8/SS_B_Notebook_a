#include "Direction.hpp"
#include <vector>
#include <iostream>
using namespace std;

namespace ariel{
class Notebook
{
public:
    int _rows;
    int _cols=100;
    vector<int> _pages;
    vector<vector<char>> myNotebook[100];
    void write(unsigned int,unsigned int,unsigned int,ariel::Direction,string);
    string read(unsigned int,unsigned int,unsigned int,ariel::Direction, int);
    void erase(unsigned int,unsigned int,unsigned int,ariel::Direction, int);
    void show(int);
    
};

};