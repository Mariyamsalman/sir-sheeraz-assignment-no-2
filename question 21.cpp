#include <iostream>
#include <string>
using namespace std;

// Define a structure to hold student details
struct Student {
    int studentID;
    string studentName;
    float studentGPA;
    int marks[7];  // Array to store 7 marks
};

// Global student record
Student globalStudent = {1, "John Doe", 3.8, {90, 85, 88, 92, 80, 76, 89}};

// UDF to print student data
void printStudentData(const Student& student) {
    cout << "Student ID: " << student.studentID << endl;
    cout << "Student Name: " << student.studentName << endl;
    cout << "Student GPA: " << student.studentGPA << endl;
    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << student.marks[i] << " ";
    }
    cout << endl << endl;
}

int main() {
    // Local student record
    Student localStudent = {2, "Jane Smith", 3.9, {95, 89, 91, 94, 90, 85, 88}};
    
    // Pass both student records to the UDF to print their data
    cout << "Global Student Data:" << endl;
    printStudentData(globalStudent);  // Pass global student data

    cout << "Local Student Data:" << endl;
    printStudentData(localStudent);   // Pass local student data

    return 0;
}

