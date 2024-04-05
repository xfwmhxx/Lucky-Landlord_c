#pragma once
#ifndef POSITION_H
#define POSITION_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Position {
private:
    int row;
    int column;
public:
    Position();
    Position(int r, int c);

    int getRow();
    int getColumn();

};

#endif // !POSITION_H