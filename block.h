#include "raylib.h"
 
const int empty = -1;
const int mine = 0;
 
class block {
public:
    block();
    block(int x, int y, int btype);
    
    
    // Mutators
    setx(int x);
    sety(int y);
    setrevealed(bool reveal);
    setmarked(bool mark);
    settype(int btype);
    formatblock(int x, int y);
    
    // Accessors
    int getx();
    int gety();
    bool getrevealed();
    bool getmarked();
    int gettype();

private:
    // Coordinates of block
    int xcord;
    int ycord;
    
    // States
    bool revealed;
    bool marked;
    
    // Type
    int type; // Ranges from -1 to 8

};