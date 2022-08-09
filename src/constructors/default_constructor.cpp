#include <iostream>
#include <string>


class Person {
    private:
        std::string name;
        int age;
        float height;
    public:
        // non-parametrized or otherwise called a default constructor
        // it is used to provide default values to the member variables
        Person () {
            name = "NULL";
            age = 0;
            height = 0.0f;
            
            // print this to see that the default constructor has been called!
            std::cout << "Default constructor has been called " << "\n";
        }
        
        // you can do this here and then define it outside the class
        void sayHello();
        
        void getData() {
            std::cout << "Name: " << name << "\n";
            std::cout << "Age: " << age << "\n";
            std::cout << "Height: " << height << "\n";
        }
};

void Person::sayHello() {
    std::cout << "Say hello" << "\n";
}


int main() {
    // initialize the person object!
    Person Emeka;
    Emeka.getData();
    Emeka.sayHello();
    
    return 0;
    
}