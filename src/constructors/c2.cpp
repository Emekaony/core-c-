#include <iostream>
#include <string>

/*
    c++ gives us 3 types of constructors
    1. Non-parametrized or default
    3. copy 
    3. parametrized
*/

class Book {
    private:
        int ISBN;
        double price;
        std::string name;
        std::string color;

    public:
        // default constructor can be voided using constructor overloading
        // Book() {
        //     ISBN = 0;
        //     price = 0.0;
        //     name = "NULL";
        //     color = "NULL";
        // }

        // using a parametrized constructor is much better. we have also overloaded it 
        // to avoid the use of a default constructor. This saves space in our code as well as makes things less complex.
        Book(int isbn = 0, double price_a = 0.0, std::string name_a = "NULL", std::string color_a = "NULL") {
            ISBN = isbn;
            name = name_a;
            color = color_a;
            price  = price_a;
        }

        // copy constructor. so when you do instance1(instance2), stuff works
        // we use the ampersand operator here, (&) so that we do not make a new Book
        Book(Book &book) {
            ISBN = book.ISBN;
            name = book.name;
            color = book.color;
            price = book.price;
        }

        void getData() {
            std::cout << "ISBN: " << ISBN << "\n";
            std::cout << "Color: " << color << "\n";
            std::cout << "Name: " << name << "\n";
            std::cout << "Price: " << price << "\n";
        }
};

int main() {

    // first instance
    Book book1(1234, 99.0, "journal", "green");

    // second instance but with the use of copy constructor
    Book book2(book1);
    book2.getData();

    return 0;
}