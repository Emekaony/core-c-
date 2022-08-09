#include <iostream>
#include <string>

class House {

    private:
        int length;
        int breadth;
        std::string location;

    public:
        void setData(int x, int y) {
            length = x;
            breadth = y;
        }

        void area() {
            std::cout << "The area is " << length * breadth << "\n";
        }

        void setLocation(std::string location) {
            location = location;
        }

        void sayLocation() {
            std::cout << "Your location is: " << location << "\n";
        }

};

int main() {

    House h1;
    h1.setData(500, 500);
    h1.area();
    h1.setLocation("Jamaica");
    h1.sayLocation();

    return 0;
}