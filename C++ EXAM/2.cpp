#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    string ownerName;

public:

    void setDetails(int accNo, string name, double bal) {
        accountNumber = accNo;
        ownerName = name;
        balance = bal;
    }

   
    void credit(double amount) {
        balance += amount;
        cout << "Amount credited: " << amount << endl;
    }

    
    void debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount debited: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;


    acc.setDetails(101, "Om Vadnere", 9000.0);

    
    acc.displayBalance();
    acc.credit(3000);
    acc.debit(6000);
    acc.displayBalance();

    return 0;
}
