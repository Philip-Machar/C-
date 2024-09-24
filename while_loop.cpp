/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to display 1 - 100 and calculate the sum
*/

//importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

//The main function where execution begins
int main() {
    
    //Declaring variable i and sum
    int i = 1, sum = 0;
    
    // Looping from 1 to 100
    while (i <= 100) {
        
        //Displaying the value of i in each iteration
        cout << i << endl;
        
        //Adding the current value of i to sum
        sum += i;
        
        //incrementing the value of i by 1
        i++;
    }
    
    // Displaying the final value of sum
    cout << "The sum is: " << sum;
    
    //Telling the OS that our program was successfully executed
    return 0;
}
