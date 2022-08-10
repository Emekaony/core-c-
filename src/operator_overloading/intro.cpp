#include <iostream>
#include <stdlib.h>

class Vec {
    private:
        double x, y;
    
    public:
        // using operator overloading, we have defined 
        // a plus operator for our custom vector class
        Vec operator + (Vec v2) {
            Vec temp;
            temp.x = x + v2.x;
            temp.y = y + v2.y;
            return temp;
        }

        // overload the preincrement operator
        // in this sense, it will add one to both the x and y coordinates
        // does not need to return anything so we set it as void
        void operator ++ () {
            ++x, ++y;
        }

        // overload the posincrement operator
        // this works when ++ is used as a postfix
        // (int) is the syntax used when we want unary operators as postfix
        // even though the vector uses doubles, this (int) must be there
        void operator ++ (int) {
            x++, y++;
        }

        Vec operator - (Vec v2) {
            Vec temp;
            temp.x = x - v2.x;
            temp.y = y - v2.y;
            return temp;
        }

        // default constructor definition
        Vec(double x_ = 0.0, double y_ = 0.0) {
            x = x_;
            y = y_;
        }

        // display values
        void displyCoords() {
            printf("\t\nThe coordinates are {x, y} -> {%lf, %lf}", x, y);
        }
};

int main() {

    Vec v1(43.54, -90.87);
    Vec v2(-23.98, 44.56);

    // we add them and this returns a vec type
    Vec sum = v1 + v2;
    // postfix
    v2++;
    v2.displyCoords();

    sum.displyCoords();
    return 0;
}