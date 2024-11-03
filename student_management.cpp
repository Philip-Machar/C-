#include <iostream>

using namespace std;

class Person {
    protected:
        string name;
    
    public:
        Person(string name){
            setName(name);
        };
        
        void setName (string name) {
            this->name = name;
        };
        
        string getName(){
            return name;
        };
};

class Student: public Person {
    private:
        int studentID;
    
    public:
        Student(string name, int studentID)
            :Person(name) {
                this->studentID = studentID;
            };
            
        int getStudentID() {
            return studentID;
        };
};

class GraduateStudent: public Student {
    private:
        string researchTopic;
        
    public:
        GraduateStudent(string name, int studentID, string researchTopic)
            :Student(name, studentID) {
                this->researchTopic = researchTopic;
            };
        
        string getResearchTopic() {
            return researchTopic;
        };
};

int main() {
    Student student1("John", 1001);
    GraduateStudent graduateStudent1("Alice", 2001, "Artificial Intelligence");
    
    cout << "Name: " << student1.getName() << endl;
    cout << "Student ID: " << student1.getStudentID() << endl;
    
    cout << endl;
    
    cout << "Name: " << graduateStudent1.getName() << endl;
    cout << "Student ID: " << graduateStudent1.getStudentID() << endl;
    cout << "Research Topic: " << graduateStudent1.getResearchTopic() << endl;
    
    return 0;
};
