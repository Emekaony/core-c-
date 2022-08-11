#include <iostream>
#include <stdlib.h>

class Animal {
    protected:
        std::string name;
        int age;
    
    public:
        Animal() {
            printf("Default constructor of base class\n");
        }

        Animal(std::string name_, int age_) {
            name = name_;
            age = age_;
            printf("Para constructor of base class\n");
        }

        void sayHello() {
            printf("Hello from the base class\n");
        }
};

class Dog : Animal {
    private:
        std::string breed;
        std::string nickName;
    public: 
        Dog() {
            printf("Default constructor of derived dog class\n");
        }

        // this works like magic, I love it!!
        // I love coding so much!!
        Dog(std::string name_, int age_, std::string breed_, std::string nickName_) : Animal(name_, age_) {
            breed = breed_;
            nickName = nickName_;
            // don't need to set these explicitly as they are set by default
            // name = name_;
            // age = age_;
        }

        std::string getName() {
            return name;
        }

        void sayHello() {
            // this is how you call the derived class methods when you override it
            Animal::sayHello();
            printf("Hello from the derived class\n");
        }

};

int main() {

    // Animal d4;
    // d4.sayHello();

    Dog d1("BoyBreed", 19, "PitBull", "BigMan");
    Dog d2;
    d2.sayHello();
    std::cout << d1.getName() << "\n";

    return 0;
}