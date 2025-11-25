#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    
    void setAccountNumber(int accNo) {
        accountNumber = accNo;
    }

    void setBalance(double bal) {
        balance = bal;
    }

    void setOwnerName(string name) {
        ownerName = name;
    }

    // Getter functions
    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    string getOwnerName() {
        return ownerName;
    }
};

int main() {
    BankAccount acc;

    
    acc.setAccountNumber(253569550);
    acc.setBalance(99251.55);
    acc.setOwnerName("Om Vadnere");

    
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Owner Name: " << acc.getOwnerName() << endl;
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}
