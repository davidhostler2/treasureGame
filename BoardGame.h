#ifndef BOARD_GAME_H
#define BOARD_GAME_H

#include <string>
using namespace std;

//square class
Class Square{
public:
    char symbol;
    string message;
    int horizontal_pos;
    int vertical_pos;

};

//board class
Class Board{
private:
    Square horizontal_square[8];
    Square vertical_square[8];
public:
    void printBoard();
    void readBoard(string& filename);
};

#endif
