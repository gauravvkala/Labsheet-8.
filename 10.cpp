#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char name[50];
    int roll;
    float marks;

public:
    void input() {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
