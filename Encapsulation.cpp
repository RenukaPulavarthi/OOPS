#include <iostream>
using namespace std;

// ATM class demonstrating encapsulation
class ATM {
private:
    long long pin;     // Private variable for PIN
    long long balance; // Private variable for balance

public:
    // Method to set the PIN and initialize balance
    void setPin(long long val) {
        this->pin = val;
        this->balance = 0;
        cout << "PIN set successfully" << endl;
    }

    // Method to return current balance
    long long getBalance() {
        return this->balance;
    }

    // Method to deposit money
    void creditAmount(long long val) {
        this->balance += val;
        cout << "Credit successful" << endl;
    }

    // Method to withdraw money with PIN validation
    void debitAmount(long long pin, long long val) {
        if (pin != this->pin) {
            cout << "PIN mismatch" << endl;
            return;
        }
        if (val > this->balance) {
            cout << "Insufficient balance" << endl;
            return;
        }
        this->balance -= val;
        cout << "Debit successful" << endl;
    }
};

// Main function to simulate ATM operations
int main() {
    ATM obj;

    obj.setPin(1234); // Set a PIN

    cout << "Available balance: " << obj.getBalance() << endl;

    obj.creditAmount(10000); // Deposit ₹10000
    cout << "Available balance: " << obj.getBalance() << endl;

    obj.debitAmount(1234, 5000); // Withdraw ₹5000 with correct PIN
    cout << "Available balance: " << obj.getBalance() << endl;

    obj.debitAmount(124, 100); // Wrong PIN
    cout << "Available balance: " << obj.getBalance() << endl;

    obj.debitAmount(1234, 10000); // Try to withdraw more than balance
    cout << "Available balance: " << obj.getBalance() << endl;

    return 0;
}
