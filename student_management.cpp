/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A simple student management program to demonstrate inheritance in C++
*/

//importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

// Class representing a Person
class Person {
    protected:
        //Data member to store name
        string name;
    
    public:
        // Constructor to initialize the name
        Person(string name){
            setName(name);
        };
        
        // Setter function to change the name
        void setName (string name) {
            this->name = name;
        };
        
        // Getter function to retrieve the name
        string getName(){
            return name;
        };
};

// Derived class representing a Student, inherits from Person
class Student: public Person {
    private:
        //Data member representing student ID
        int studentID;
    
    public:
        // Constructor to initialize name and student ID
        Student(string name, int studentID)
            :Person(name) {
                this->studentID = studentID;
            };
        
        // Getter function to retrieve the student ID
        int getStudentID() {
            return studentID;
        };
};

// Derived class representing a Graduate Student, inherits from Student
class GraduateStudent: public Student {
    private:
        //Data member to store the research topic
        string researchTopic;
        
    public:
        // Constructor to initialize name, student ID, and research topic
        GraduateStudent(string name, int studentID, string researchTopic)
            :Student(name, studentID) {
                this->researchTopic = researchTopic;
            };
        
        // Getter function to retrieve the research topic
        string getResearchTopic() {
            return researchTopic;
        };
};

int main() {
    // Create a Student object with name "John" and student ID 1001
    Student student1("John", 1001);

    // Create a GraduateStudent object with name "Alice", student ID 2001, and research topic "Artificial Intelligence"
    GraduateStudent graduateStudent1("Alice", 2001, "Artificial Intelligence");
    
    // Display the name and student ID of the student
    cout << "Name: " << student1.getName() << endl;
    cout << "Student ID: " << student1.getStudentID() << endl;
    
    cout << endl;
    
    // Display the name, student ID, and research topic of the graduate student
    cout << "Name: " << graduateStudent1.getName() << endl;
    cout << "Student ID: " << graduateStudent1.getStudentID() << endl;
    cout << "Research Topic: " << graduateStudent1.getResearchTopic() << endl;
    
    //Telling the OS, our program was successfully executed
    return 0;
};
