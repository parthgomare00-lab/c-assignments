#include <iostream>
#include <string>
using namespace std;

class Student 
{
 private:
   int rollNumber;
   string name;
   string course;

public:

    Student(int rollNumber, string name, string course) 
    {
        this->rollNumber = rollNumber;
        this->name = name;
        this->course = course;
    }
 void displayDetails() 
    {
        cout << "Student Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }

};

int main() 
{
    int rollNo;
    string studName;
    string studCourse;

    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cin.ignore(); 

    cout << "Enter Name: ";
    getline(cin, studName);

    cout << "Enter Course: ";
    getline(cin, studCourse);

    cout << endl; 
    Student s1(rollNo, studName, studCourse);
    s1.displayDetails();

    return 0;
}
