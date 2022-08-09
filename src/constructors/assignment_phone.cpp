#include <iostream>
#include <string>

class Phone {
    private:
        std::string name;
        int RAM;
        int processor;
        std::string battery;
    
    public:
        // parametrized constructor
        Phone(std::string name_a = "NULL", int RAM_a = 0, int processor_a = 0, std::string battery_a = "NULL") {
            name = name_a;
            RAM = RAM_a;
            processor = processor_a;
            battery = battery_a;
        }

        // copy constructor
        Phone (Phone &phoneObj) {
            name = phoneObj.name;
            RAM = phoneObj.RAM;
            processor = phoneObj.processor;
            battery = phoneObj.battery;
        }

        // function to display the data
        void getData() {
            std::cout << "Name of phone is: " << name << "\n";
            std::cout << "Name of battery is: " << battery << "\n";
            std::cout << "Name of processor is: " << processor << "\n";
            std::cout << "RAM available on the phone is: " << RAM << "\n"; 
            std::cout << "\n\n";
        }

        void changeName(std::string newName) {
            name = newName;
        }
};

int main() {

    Phone p1("Iphone 11", 8, 99, "litium");
    Phone p2(p1);
    Phone p3;

    // before changing the data in p1
    std::cout << "P1 and p2 before changing: " << "\n";
    p1.getData();
    p2.getData();

    // change p1's name
    p1.changeName("Kamsi");

    // after changing data in p1
    std::cout << "After changing p1" << "\n";
    p1.getData();
    p2.getData();
    p3.getData();

    // changing p1's name did not affect p2's name

    return 0;
}