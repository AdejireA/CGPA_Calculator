#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

double GPACalculation(double TLU, double TCP)
{
    if (TLU == 0)
        return 0; // To prevent division by zero

    double GPACalculated;
    GPACalculated = TCP / TLU;
    return (GPACalculated);
}

int Gradetopoint(char Grade)
{
    switch (toupper(Grade)) // Convert to uppercase to handle case insensitivity
    {
    case 'A':
        return 5;
    case 'B':
        return 4;
    case 'C':
        return 3;
    case 'D':
        return 2;
    case 'E':
        return 1;
    case 'F':
        return 0;
    default:
        return -1; // Indicating an invalid grade
    }
}

int main()
{
    string Name;
    int level;

    cout << "GPA CALCULATOR\n";
    cout << "Enter your name: ";
    getline(cin, Name);
    cout << "Welcome " << Name << "\n";

    cout << "Please enter your level: ";
    cin >> level;

    int Numberofcourses;
    cout << "Enter the number of courses you took: ";
    cin >> Numberofcourses;

    int TLU = 0;
    int TCP = 0;

    for (int i = 0; i < Numberofcourses; i++)
    {
        char Grade;
        int Courseunit;
        cout << "Enter the grade for course " << (i + 1) << " (A, B, C, D, E, F): ";
        cin >> Grade;
        cout << "Enter the number of units for the course " << (i + 1) << ": ";
        cin >> Courseunit;

        int point = Gradetopoint(Grade);
        if (point == -1)
        {
            cout << "Invalid grade entered. Please enter a valid grade (A, B, C, D, E, F).\n";
            i--; // Repeat the current iteration
            continue;
        }

        TLU += Courseunit;
        TCP += (Courseunit * point);
    }

    double GPA = GPACalculation(TLU, TCP);

    cout << "Student Name: " << Name << "\n";
    cout << "Level: " << level << "\n";
    cout << "GPA : " << GPA << "\n";

    return 0;
}
