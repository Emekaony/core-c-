#include <iostream>

using namespace std;

// We have itroduced the idea of a virtual function

class Base {
    public:
        // if we do not want the derived classes to have access to a function
        // we prefix it with virtual
        virtual void sayHello() {
            cout << "Base class hello" << endl;
        }

};

class drv1 : public Base {
    public:
        void sayHello() {
            cout << "Drv1 class hello" << endl;
        }
};

class drv2 : public Base {
    public:
        void sayHello() {
            cout << "drv2 class hello" << endl;
        }
};

int main() {
    // define pointers for the three classes!
    Base* ptr1 = new drv1();
    Base* ptr2 = new drv2();
    Base* ptr3 = new Base();
    
    // access member functions
    ptr1->sayHello();
    ptr2->sayHello();
    ptr3->sayHello();
    
    return 0;
}



