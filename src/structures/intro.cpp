#include <iostream>
#include <string>

using namespace std;

struct Person {         // how you define basic structures
    string name;
    int age;
    float weight;
    float height;
    double salary;

    // must put semi-colon at the end of a struct!
};

int main() {
    Person user;
    user.age = 21;
    user.height = 6.0f;
    user.weight = 170.0f;
    user.salary = 16.0;
    user.name = "John";

    // print the information from the user
    cout << "Salary is " << user.salary << "\n";
    cout << "Age is " << user.age << "\n";
    cout << "Weight is " << user.weight << "\n";
    cout << "Height is " << user.height << "\n";

    return 0;
}