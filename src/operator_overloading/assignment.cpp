#include <iostream>
#include <stdlib.h>

class Coords {
    private:
        int posx;
        int posy;
    public:
        // default constructor
        Coords(int x = 0, int y = 0) {
            posx = x;
            posy = y;
        }

        // copy constructor
        Coords(Coords &c2) {
            c2.posx = posx;
            c2.posy = posy;
        }

        void operator -- () {
            --posx;
            --posy;
        }

        void operator ++ () {
            ++posx;
            ++posy;
        }

        void operator -- (int) {
            posx--;
            posy--;
        }

        void operator ++ (int) {
            posx++;
            posy++;
        }

        void showCoords() {
            printf("Coordinates are: {%d, %d}\n", posx, posy);
        }
};

int main() {

    // create an object and show its coords
    Coords p1(99, 92);
    Coords p2(p1);
    p1.showCoords();
    p2.showCoords();

    // postincrement
    p1++;
    p1.showCoords();

    // preincrement
    ++p1;
    p1.showCoords();

    // predecrement
    --p1;
    p1.showCoords();

    // postdecrement
    p1--;
    p1.showCoords();

    return 0;
}