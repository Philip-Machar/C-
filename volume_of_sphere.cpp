/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to calculate volume of a sphere
*/

//importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

// Function prototype (declaration)
float volume_of_sphere(float radius);

// The main function where execution begins
int main() {
    float radius;
    cout << "Enter radius of the sphere(cm): ";
    cin >> radius;
    
    float result = volume_of_sphere(radius);
    
    cout << "The volume of the sphere is: " << result << "cm^3"<< endl;
    
    // Telling the OS that our program was successfully executed
    return 0;
}

// Function definition
float volume_of_sphere(float radius) {
    float volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    return volume;
}

