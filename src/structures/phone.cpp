#include <iostream>
#include <string>

using namespace std;

// you can nest structures into eachother

struct Camera {
    int front;
    int rear;
};

struct Phone {
    string name;
    int processor;
    int RAM;
    int ROM;
    Camera camera;
    double price;
};

int main() {
    // define a struct phone
    Phone iphone;

    // add values into my iphone
    iphone.name = "Iphone 6";
    iphone.price = 600.33;
    iphone.camera.front = 14;
    iphone.processor = 16;
    iphone.RAM = 4;
    iphone.ROM = 320;
    iphone.camera.rear = 24;

    /* 
        could have also done:
        Person p1;
        p1 = {then list the variables in the order in which they were defined}
    */

    // display the data that we have put into the users iphone
    cout << "Price of the phone is " << iphone.price << "\n";
    cout << "RAM of the phone is " << iphone.RAM << "\n";
    cout << "Front camera pixel is " << iphone.camera.front << "\n";
    cout << "Rear camera pixel is " << iphone.camera.rear << "\n";
    cout << "Processor of the phone is " << iphone.processor << "\n";
    cout << "ROM of the phone is " << iphone.ROM << "\n";
    cout << "Name of the phone is " << iphone.name << "\n";

    return 0;
}