/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to calculate gross pay, taxes, and net pay
*/

//importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

//The main function where execution begins
int main() {
    // Variables to store input and results
    float hours_worked, hourly_wage, gross_pay = 0, taxes = 0, net_pay = 0;

    // Prompting the user to enter hours worked and hourly wage
    cout << "Enter hours worked in a week: ";
    cin >> hours_worked;

    cout << "Enter hourly wage(ksh): ";
    cin >> hourly_wage;

    // Calculating gross pay
    if (hours_worked > 40) {
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * 1.5 * hourly_wage);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    // Calculating taxes
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Calculating net pay
    net_pay = gross_pay - taxes;

    // Output results
    cout << "Gross pay: ksh" << gross_pay << endl;
    cout << "Taxes: ksh" << taxes << endl;
    cout << "Net pay: ksh" << net_pay << endl;

    // Telling the OS that the program was successfully executed
    return 0;
}
