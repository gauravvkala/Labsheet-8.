#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function for int addition
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function for double addition
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    int x = 5, y = 10;
    double p = 12.5, q = 3.75;

    cout << "Addition of integers: " << calc.add(x, y) << endl;
    cout << "Addition of doubles:  " << calc.add(p, q) << endl;

    return 0;
}
