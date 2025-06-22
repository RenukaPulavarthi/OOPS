import java.util.*;

// ATM class encapsulates balance and PIN management
class ATM {
    private long pin;       // Private: only accessible within this class
    private long balance;   // Private: stores account balance

    // Method to set the PIN and initialize balance
    public void setPin(int val) {
        this.pin = val;
        this.balance = 0;
        System.out.println("PIN set successfully");
    }

    // Method to return the current balance
    public long getBalance() {
        return this.balance;
    }

    // Method to add money to the account
    public void creditAmount(long val) {
        this.balance += val;
        System.out.println("Credit successful");
    }

    // Method to withdraw money from the account with PIN verification
    public void debitAmount(long val, long pin) {
        if (pin != this.pin) {  // Check if entered PIN is correct
            System.out.println("PIN mismatch");
            return;
        }
        if (val > this.balance) {  // Check for sufficient balance
            System.out.println("Insufficient balance");
            return;
        }
        this.balance -= val;
        System.out.println("Debit successful");
    }
}

public class Main {
    public static void main(String args[]) {
        ATM obj = new ATM();  // Create a new ATM object

        obj.setPin(1234);  // Set PIN for the account

        // Check balance before any transaction
        System.out.println("Available balance: " + obj.getBalance());

        obj.creditAmount(10000);  // Deposit ₹10000
        System.out.println("Available balance: " + obj.getBalance());

        obj.debitAmount(5000, 1234);  // Withdraw ₹5000 with correct PIN
        System.out.println("Available balance: " + obj.getBalance());

        obj.debitAmount(100000, 1234);  // Attempt to withdraw ₹100000 (should fail)
        System.out.println("Available balance: " + obj.getBalance());

        obj.debitAmount(10, 134);  // Attempt to withdraw with wrong PIN
        System.out.println("Available balance: " + obj.getBalance());
    }
}
