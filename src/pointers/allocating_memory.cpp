#include <iostream>
#include <stdlib.h>

// I will assign a pointer to this and use the -> operator to access members of this struct
struct Student {
    std::string name;
    int ID;

    void display() {
        std::cout << name << "'s ID is " << ID << "\n";
    }
};

class Dummy {
    private:
        int data;
    public: 
        void setData(int set) {
            data = set;
        }

        int getValue() {
            return data;
        }
};

int main() {
    Dummy* t1 = new Dummy;
    // this is where we ask for memory. It is a must
    // t1 = new Dummy;

    t1->setData(44);
    printf("We have gotten the value of data: %d\n", t1->getValue());

    // pointer for struct
    Student* e1 = new Student;
    // e1 = new Student;
    e1->name = "Nnaemeka";
    e1->ID = 332;
    e1->display();

    // allocate memory for a block and deallocate when done
    int* ptr = new int[3];
    ptr[0] = 1;
    ptr[1] = 33;
    ptr[2] = 25;
    for (int i = 0; i < 3; i++) {
        printf("ptr[%d] is %d\n", i, ptr[i]);
    }
    // deallocate the memory. Do not forget the [] because we allocated a block
    delete[] ptr;
    delete t1;
    delete e1;

    return 0;
}