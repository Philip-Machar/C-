/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to demonstrate inheritance in C++
*/

//importing the input/output stream library
#include <iostream>
#include <cmath>

//Declaring the standard namespace for input/output
using namespace std;

// Class representing a shape
class Shape {
protected:
    //Data member to store color of shape
    string color; 
public:
    // Constructor to initialize the color of the shape
    Shape(string c) {
        color = c;
    }

    // Setter function to change the color of the shape
    void setColor(string c) {
        color = c;
    }

    // Getter function to retrieve the color of the shape
    string getColor() const {
        return color;
    }
};

// Derived class representing a rectangle, inherits from Shape
class Rectangle : public Shape {
private:
    //Data members representing length and width
    float length; 
    float width; 
public:
    // Constructor to initialize length, width, and color
    Rectangle(float l, float w, string c) : Shape(c) {
        length = l;
        width = w;
    }

    // Function to calculate and return the area of the rectangle
    float area() const {
        return length * width;
    }
};

// Derived class representing a circle, inherits from Shape
class Circle : public Shape {
private:
    float radius;
public:
    // Constructor to initialize radius and color using
    Circle(float r, string c) : Shape(c) {
        radius = r;
    }

    // Function to calculate and return the area of the circle
    float area() const {
        return M_PI * radius * radius;
    }
};

int main() {
    // Create a Rectangle object with length 15, width 10, and color "blue"
    Rectangle rect(15, 10, "blue");

    // Create a Circle object with radius 2 and color "pink"
    Circle circ(2, "pink");

    // Display the color and area of the rectangle
    cout << "Rectangle color: " << rect.getColor() << ", area: " << rect.area() << endl;

    // Display the color and area of the circle
    cout << "Circle color: " << circ.getColor() << ", area: " << circ.area() << endl;

    return 0;
}
