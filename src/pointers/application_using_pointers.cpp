#include <iostream>

class Car {
    private:
        int weight;
    public:
        void setWeight(int w) {
            weight = w;
        }
        
        void getWeight() {
            std::cout << "Car Weight is " << weight << " kgs" << "\n";
        }
};

class BMW {
    private:
        int topSpeed;
        // do not forget the 'new' when dynamically allocating memory!!!
        // always always always initialize your pointers!!
        Car* myCar = new Car;
    public:
        // parametrized constructor
        BMW(int topSpeed = 0, int weight = 0) {
            this->topSpeed = topSpeed;
            // I a learning so much from this course fr!
            myCar->setWeight(weight);
        }
        
        void getTopSpeed() {
            std::cout << "Your top speed is " << topSpeed << " mph" << "\n";
        }
        
        void getWeight() {
            // std::cout << "Your Weight is " << myCar->Weight << "\n";
            myCar->getWeight();
        }
        
        // use a destructor to free up any dynamically allocated mem
        ~BMW() {
            delete myCar;
        }
};

int main() {
    BMW dummy(99, 1500);
    dummy.getWeight();
    dummy.getTopSpeed();
    
    return 0;
}