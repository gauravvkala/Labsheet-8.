#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() { balance = 0; }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!\n";
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(5000);
    acc.withdraw(1200);
    acc.showBalance();

    return 0;
}
