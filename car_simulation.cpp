#include <iostream>
using namespace std;

// Class representing a Car
class Car {
private:
    //private data members of car
    string brand;   
    string model;    
    float price;     
    int mileage;     

public:
    // Constructor to initialize the car's details
    Car(string b, string m, float p, int mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }

    // Function to display the car's details
    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Function to simulate driving the car, which increases mileage
    void drive(int distance) {
        mileage += distance;
        cout << "After driving " << distance << " miles, the updated mileage is: " << mileage << " miles" << endl;
    }
};

int main() {
    // Create a Car object with the specified details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Display the car's details
    myCar.display();

    // Simulate driving for 150 miles and display the updated mileage
    myCar.drive(150);

    // Simulate driving for 300 miles and display the updated mileage
    myCar.drive(300);

    return 0;
}
