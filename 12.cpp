#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { balance = 0; }

    void deposit(double amount) { balance += amount; }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void showBalance() { cout << "Balance: " << balance << endl; }
};

int main() {
    BankAccount b;
    b.deposit(1000);
    b.withdraw(300);
    b.showBalance();
    return 0;
}
