#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    char name[50];
    int age;

    void inputPerson() {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
public:
    float marks;

    void inputStudent() {
        inputPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.display();
    return 0;
}
