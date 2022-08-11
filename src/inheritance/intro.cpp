#include <iostream>
#include <stdlib.h>

// it is okay for most of this stuff not to make sense right now


// inheritance example
class Rectangle {
    protected:
        int length;
        int breadth;
    public:

        // default constructor of base class
        Rectangle() {
            std::cout << "Default constructor of base class -> rectangle" << "\n";
        }

        // parametrized constructor of base class
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
            printf("Parametrized constructor of base class\n");
        }

        void show() {
            std::cout << "Length is: " << length << "\n";
            std::cout << "Breadth is: " << breadth << "\n";
        }

        void setParameters(int a, int b) {
            length = a;
            breadth = b;
        }
};

class Cuboid : public Rectangle {
    public:
        int height;

        Cuboid() {
            printf("Default constructor of derived class -> cuboid\n");
        }

        Cuboid(int h) {
            height = h;
            printf("Parametrized constructor of derived class -> cuboid\n");
        }

        void display() {
            std::cout << "Height of cuboid: " << height << "\n";
        }

};

int main() {

    // rectangle has its length and breadth member properties that we will set now
    Rectangle r1(99, 23);
    r1.show();

    /*
        The default constructor of the base class is always called whenever 
        we initialize a derived class object. Nice!
    */
    Cuboid c1(65);
    c1.setParameters(24, 76);
    c1.show();
    c1.display();

    return 0;
}