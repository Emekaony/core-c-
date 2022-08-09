#include <iostream>
#include <string>

class Student {
    private:
        int ID;
        std::string year;
        std::string department;
        std::string firstName;
        std::string lastName;

    public: 
        void getYear() {
            std::cout << firstName << " is a " << year << "\n";
        }
        void welcomeStudent() {
            std::cout << "Welcome to Earth, " << firstName << "\n";
        }
        void setFirstName(std::string fname) {
            firstName = fname;
        }
        void setLastName(std::string lname) {
            lastName = lname;
        }
        void setYear(std::string y) {
            year = y;
        }

};

int main() {
    // instanciate a student
    Student tt;

    // set some variables for the student
    tt.setFirstName("Nnaemeka");
    tt.setLastName("Ony");
    tt.setYear("Junior");

    // call some member functions
    tt.welcomeStudent();
    tt.getYear();

    return 0;
}