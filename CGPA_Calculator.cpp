#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double GPACalculation(double TLU, double TCP){
    double GPACalculated;
    GPACalculated = TCP/TLU;
    return (GPACalculated);
}


int main()
{
    string Name;
    int level;
    // string CourseGrade;

    cout << "GPA CALCULATOR  \n";
    cout << "Enter your name: ";
    getline(cin, Name);
    cout << "Welcome " << Name << "\n";

    cout << "Please enter your level: ";
    cin >> level;
    
    int Numberofcourses;
    cout << "Enter the number of courses you took: ";
    cin >> Numberofcourses;

    int TLU;
    int TCP;

    for (int i = 0; i < Numberofcourses; i++){
        char Grade;
        int Courseunit;
        cout << "Enter the grade for course " << (i + 1) << "(A, B, C, D, E, F): ";
        cin >> Grade;
        cout << "Enter the number of units for the course " << (i + 1) << ": ";
        cin >> Courseunit;

    }
    

    cout << "Student Name: " << Name << "\n ";
    cout << "Level: " << level << "\n";
    cout << "Level: " << level << "\n";
  //  cout << "Your GPA is: " << GPA << "\n";


    return (0);
}
