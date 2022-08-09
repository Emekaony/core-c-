#include <iostream>
#include <string>


class Human {
    private:
        int age;
        std::string name;
    
    public:
        // default constructor
        Human(int age_, std::string name_){
            age = age_;
            name = name_;
        }

        void getData() {
            std::cout << age;
        }
};

int main() {

    // instanciate
    Human h1(22, "Emeka");
    h1.getData();

    // this prints for some reason. Will look into it later
    Human h2(h1);
    h2.getData();

    return 0;
}