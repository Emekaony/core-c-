#include <iostream>
#include <string>

using namespace std;

struct Name {
    string firstName;
    string lastName;
};

struct Student {
    Name name;
    int age;
    int rollno;
    double marks;
};

int main()
{   
    Student Emeka;
    // notice how I have nested curly braces here!!
    Emeka = {{"Nnaemeka", "Onyeokoro"}, 21, 44, 100};
    cout << Emeka.name.firstName << "\n";
    cout << Emeka.name.lastName << "\n";
    cout << Emeka.rollno << "\n";
    cout << Emeka.age << "\n";
    cout << Emeka.age << "\n";
    
    return 0;
}