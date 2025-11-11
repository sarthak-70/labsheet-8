#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void inputPerson() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Student : public Person {
public:
    int marks;
    void inputStudent() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.inputPerson();
    s.inputStudent();
    s.display();
    return 0;
}
