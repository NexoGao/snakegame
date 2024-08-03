//
// Created by cubin on 8/4/2024.
//

#include "GameDesign.h"

void Pos::setPos(int x, int y) {
    this->x = x;
    this->y = y;
}

void Pos::setPos(Pos pos) {
    this->x = pos.getX();
    this->y = pos.getY();
}

int Pos::getX() const {
    return x;
}

int Pos::getY() const {
    return y;
}



