///////// Student Info/////////
//
//           Your Name: Oscar Stommendal
//      Your NTU Email: N2402294F@e.ntu.edu.sg
//
//
//

#include <iostream>
using namespace std;

// Function to get a valid integer input
int getValidInt() {

    int iD;
    cin >> iD;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Please enter an integer: ";
        iD = getValidInt();
    }

    return iD;
}

// Function to get a valid float input
float getValidFloat() {

    float mark;
    cin >> mark;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Please enter a valid float number: ";
        mark = getValidFloat();
    }

    return mark;
}

int main() {
    char name[50];  // Student name
    int studentID;  // Student ID
    float mathMark; // Math mark

    while (true) {
        // Get student name
        cout << "Enter student name (or enter '#' to exit): ";
        cin.getline(name, 50);

        // Check if user wants to exit
        if (strcmp(name, "#") == 0) {
            break;
        }

        // Get student ID
        cout << "Enter student ID (integer): ";
        studentID = getValidInt();
        cin.ignore(1000, '\n');

        // Get math mark
        cout << "Enter math mark (float): ";
        mathMark = getValidFloat();
        cin.ignore(1000, '\n');

        // Display student information
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Math Mark: " << mathMark << endl;
        cout << "-------------------------\n";
    }

    cout << "Program exited successfully." << endl;
    return 0;
}
