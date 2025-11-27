#include <iostream>
#include <cstring>
using namespace std;

class Car {
public:
    char brand[50];
    float price;

    void input() {
        cout << "Enter brand: ";
        cin.ignore();
        cin.getline(brand, 50);
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car c[10];

    for(int i=0;i<n;i++) {
        cout << "\nCar " << i+1 << ":\n";
        c[i].input();
    }

    cout << "\nCar Details:\n";
    for(int i=0;i<n;i++)
        c[i].display();

    return 0;
}
