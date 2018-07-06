#include "block.h"
 
block::block() {
    xcord = 0;
    ycord = 0;
    revealed = false;
    marked = false;
    type = 0;
}

block::block(int x, int y, int btype) {
    xcord = x;
    ycord = y;
    revealed = false;
    marked = false;
    type = btype;
}

///////////////////////
// Mutators
///////////////////////

block::setx(int x) {
    xcord = x;
}

block::sety(int y) {
    ycord = y;
}

block::setrevealed(bool reveal) {
    revealed = reveal;
}

block::setmarked(bool mark) {
    marked = mark;
}

block::settype(int btype) {
    type = btype;
}

block::formatblock(int x, int y) {
}

///////////////////////
// Accessors
///////////////////////

int block::getx() {
    return xcord;
}

int block::gety() {
    return ycord;
}

bool block::getrevealed() {
    return revealed;
}

bool block::getmarked() {
    return marked;
}

int block::gettype() {
    return type;
}