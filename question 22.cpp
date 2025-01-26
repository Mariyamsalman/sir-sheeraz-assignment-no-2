#include <iostream>
#include <string>
using namespace std;

// Define the structure to hold student data
struct Student {
    int studentID;
    string studentName;
    float studentGPA;
    float studentPercentage;
    int marks[5];  // Array to store 5 marks
};

// UDF to take input for student record and calculate total marks
int inputStudentDataAndCalculateTotal(Student &student) {
    // Taking input for student details
    cout << "Enter Student ID: ";
    cin >> student.studentID;

    cout << "Enter Student Name: ";
    cin.ignore();  // To ignore the newline character left by previous input
    getline(cin, student.studentName);

    cout << "Enter Student GPA: ";
    cin >> student.studentGPA;

    cout << "Enter Student Percentage: ";
    cin >> student.studentPercentage;

    // Taking input for marks (5 marks)
    int totalMarks = 0;
    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
        totalMarks += student.marks[i];  // Calculate total of marks
    }

    return totalMarks;  // Return the total marks
}

int main() {
    // Create a student object
    Student student;

    // Call the UDF to input data and calculate total marks
    int totalMarks = inputStudentDataAndCalculateTotal(student);

    // Output the total marks returned by the UDF
    cout << "\nStudent Data:" << endl;
    cout << "Student ID: " << student.studentID << endl;
    cout << "Student Name: " << student.studentName << endl;
    cout << "Student GPA: " << student.studentGPA << endl;
    cout << "Student Percentage: " << student.studentPercentage << endl;

    cout << "Total Marks: " << totalMarks << endl;

    return 0;
}

