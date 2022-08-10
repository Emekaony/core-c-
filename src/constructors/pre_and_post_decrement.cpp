#include <iostream>
#include <stdlib.h>

class Vec {
    private:
        int x, y;
    public:
        Vec(int x_ = 0, int y_ = 0) {
            x = x_;
            y = y_;
        }

        // predecrement
        void operator -- () {
            --x, --y;
        }

        // postdecrement operator
        void operator -- (int) {
            x--, y--;
        }

        void displyCoords() {
            printf("\t\nThe coordinates are {x, y} -> {%d, %d}", x, y);
        }
};

int main() {
    Vec v1(12, 23);
    Vec v2(99, 21);
    printf("Before decrementing");

    v1.displyCoords();
    v2.displyCoords();

    printf("After decrementing using pre");
    --v1;
    --v2;
    v1.displyCoords();
    v2.displyCoords();

    printf("After decrementing using post");
    v1--;
    v2--;
    v1.displyCoords();
    v2.displyCoords();

    return 0;
}