#include <iostream>
using namespace std;

class Student {
    string name;
    int roll_no;
    float marks;

public:
    void input() {
        cout << "Enter name, roll number, and marks: ";
        cin >> name >> roll_no >> marks;
    }
    void display() {
        cout << "Name: " << name << "\nRoll No: " << roll_no << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
