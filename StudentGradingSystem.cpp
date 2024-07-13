#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    vector<int> marks;
    char grade;

Student(string name, int rollNumber, vector<int> marks) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->marks = marks;
        this->grade = calculateGrade();
    }

private:
    char calculateGrade() {
        int total = 0;
        for (int mark : marks) {
            total += mark;
        }
        int average = total / marks.size();

        if (average >= 90) return 'A';
        else if (average >= 80) return 'B';
        else if (average >= 70) return 'C';
        else if (average >= 60) return 'D';
        else return 'F';
    }

}; 

    void inputStudent(vector<Student>& students) {
    string name;
    int rollNumber, numSubjects;

    cout << "Enter student's name: ";
    cin.ignore();
    getline(cin,name);
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

     vector<int> marks(numSubjects);
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    students.emplace_back(name, rollNumber, marks);
}

void displayResults(const vector<Student>& students) {
    for (const Student& student : students) {
        cout << "Name: " << student.name << ", Roll Number: " << student.rollNumber << ", Grade: " << student.grade << endl;
    }
}

void displayMenu() {
    cout << "1. Add Student" << endl;
    cout << "2. Display Results" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}



int main() {
    vector<Student> students;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            inputStudent(students);
            break;
        case 2:
            displayResults(students);
            break;
        case 3:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}