#include <iostream>

class Human {
    private:
        std::string name;
        int age;
    public:
        Human(int age, std::string name) {
            // using this makes sure that we are pointing to the 
            this->name = name;
            this->age = age;
        }

        void sayHello() {
            std::cout << "Hello there, " << this->name << "\n";
        }

        void greet() {
            // 'this' is a pointer to the current object!!!
            if (this->age > 21) {
                std::cout << "Hello there old man!" << "\n";
            } else {
                std::cout << "Hello there young fella!" << "\n";
            }
        }
};

int main() {

    // allocate memory for the Human class
    Human* tt = new Human(23, "Nnaemeka");
    // now use the -> notation to access the member functions
    tt->greet();
    tt->sayHello();

    return 0;
}