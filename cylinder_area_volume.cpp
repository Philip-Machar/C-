
/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to calculate surface area and volume of a cylinder
*/

//Importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

//Defining a class called Cylinder
class Cylinder {
    public:
        //Declaring the data member variables
        double radius, height, pi=3.14;
        
        //Defining the member functions
        double surface_area(){
            return ((2*pi*radius*radius)+(2*pi*height));
        }
        
        double volume(){
            return (pi*radius*radius*height);
        }
};

//The main function where execution begins
int main() {
    //Creating an object of the Cylinder class
    Cylinder c1;
    
    //Prompting the user to enter the radius and height of the cylinder
    cout<<"Enter the radius of the cylinder(cm): ";
    cin>>c1.radius;
    
    cout<<"Enter the height of the cylinder(cm): ";
    cin>>c1.height;
    
    //Crating new line
    cout<<endl;
    
    //Outputting the surface area and colume of the cylinder
    cout<<"The surface area of the cylinder is: "<<c1.surface_area()<<"cm^2"<<endl;
    cout<<"The volume of the cylinder is: "<<c1.volume()<<"cm^3"<<endl;

    //Telling the OS that our program was successfully executed
    return 0;
}
