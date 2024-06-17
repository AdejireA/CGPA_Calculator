#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string Name;
    int newvalue;
    int CourseNumber;
    int CourseGrade;

    cout << "GPA CALCULATOR \n \n";   
    cout << "Enter your name: ";
    getline (cin, Name);
    cout << "Welcome " << Name << "\n";

    cout << "Please enter your level: ";
    cin >> newvalue; 
    cout << "You are a " << newvalue <<" student" << "\n";

    cout << "How many Courses did you take: ";
    cin >> CourseNumber;

    cout << "Enter your Course Grades";
    cin >> CourseGrade;


    return (0);
}
