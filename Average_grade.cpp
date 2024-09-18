/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to calculate average grade.
*/

//importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

int main() {
    //Declaring variables to store marks and average
    int physics, chem, maths, average;
    
    //Prompting the user to enter marks for each subject
    cout << "Enter marks for Physics: ";
    cin >> physics;
    
    cout << "Enter marks for Chemistry: ";
    cin >> chem;
    
    cout << "Enter marks for Maths: ";
    cin >> maths;
    
    //Calculating the average
    average = (physics + chem + maths) / 3;
    
    //Using switch statement to determine the average grade
    switch (average) {
        case 70 ... 100:
            cout << "Grade: A";
            break;
        case 60 ... 69:
            cout << "Grade: B";
            break;
        case 50 ... 59:
            cout << "Grade: C";
            break;
        case 40 ... 49:
            cout << "Grade: D";
            break;
        case 0 ... 39:
            cout << "FAIL";
            break;
        default:
            cout << "Enter valid marks!";
    }
    
    //Telling the OS that the program was successfully executed
    return 0;
}