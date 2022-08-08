#include <iostream>
#include <string>

using namespace std;

// learn more about padding to save memory space

struct Human {
    string name;
    int age;
    string favoriteFood;
};

int main() {
    // see what happens when we assign one struct to another 
    // and change the values in the parent struct
    Human user1;
    user1 = {"Nnaemeka", 21, "Pasta"};
    Human user2 = user1;

    cout << "User 1 name before changing " << user1.name << "\n";
    cout << "User 2 name before changing user 1 name " << "\n";

    user1.name = "Charles";

    cout << "User 1 name after changing " << user1.name << "\n";
    cout << "User 2 name after changing user 1 name " << user2.name << "\n";

    /*

    output: 
        User 1 name before changing Nnaemeka
        User 2 name before changing user 1 name 
        User 1 name after changing Charles
        User 2 name after changing user 1 name Nnaemeka

        so you can see that changing the parent struct does not affect the child struct!
    */

    return 0;  
}