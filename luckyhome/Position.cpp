#include "../luckyhome/Position.h"

Position::Position() {
    row = 0;
    column = 0;
}

Position::Position() {}

Position::Position(int r, int c) {
    row = r;
    column = c;
}

int Position::getRow() {
    return row;
}

int Position::getColumn() {
    return column;
}