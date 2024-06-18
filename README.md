# CGPA Calculator

## Description

This is a simple C++ program that calculates the Grade Point Average (GPA) for a student based on their grades and course units. The user inputs their name, level, the number of courses they have taken for the semester, and for each course, the grade and course unit. The program then calculates and displays the GPA.

## Features

- User input for student name and level.
- User input for the number of courses taken.
- For each course, user inputs the grade and course unit.
- Grades are converted to points based on a predefined scale.
- Total Load Units (TLU) and Total Credit Points (TCP) are calculated.
- GPA is calculated and displayed.

## Grade to Point Conversion

- A: 5 points
- B: 4 points
- C: 3 points
- D: 2 points
- E: 1 point
- F: 0 points

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- Basic knowledge of C++ programming

## Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/your-username/cgpa-calculator.git
   cd cgpa-calculator
   ```

2. **Compile the code:**

   ```bash
   g++ -o cgpa_calculator main.cpp
   ```

3. **Run the program:**

   ```bash
   ./cgpa_calculator
   ```

## Usage

1. **Start the CGPA calculator:**

   Run the compiled program from your terminal.

   ```bash
   ./cgpa_calculator
   ```

2. **Enter your name and level:**

   The program will prompt you to enter your name and level.

3. **Enter the number of courses:**

   The program will prompt you to enter the number of courses you want to include in the GPA calculation.

4. **Enter the grades and course units:**

   For each course, input the grade (e.g., A, B, C) and the corresponding course unit.

5. **View the calculated GPA:**

   After entering all the courses, the program will display the calculated GPA along with your name and level.

### Example

```sh
Enter your name: Daniel McHenry
Enter your level: 100
Enter the number of courses you took: 3
Enter the grade for course 1 (A, B, C, D, E, F): A
Enter the course unit for course 1: 3
Enter the grade for course 2 (A, B, C, D, E, F): B
Enter the course unit for course 2: 4
Enter the grade for course 3 (A, B, C, D, E, F): C
Enter the course unit for course 3: 2

Student Name: Daniel McHenry
Level: 100
GPA: 3.77778
```

## Error Handling

- If an invalid grade is entered, the program will display an error message and terminate.
  
  Example:
```sh
  Enter your name: John Doe
  Enter your year: 1
  Enter the number of courses you took: 2
  Enter the grade for course 1 (A, B, C, D, E, F): Z
  Enter the course unit for course 1: 3
  Invalid grade entered. Please restart the program and try again.
```

## Contributing

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit them (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License

This project is licensed under the MIT License.

## Author

ADEJIRE ADEGITE

## Acknowledgments

- Thanks to all the contributors to the C++ programming community.
- This program is a simple educational tool to demonstrate basic C++ programming concepts.