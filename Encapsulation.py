# Define the ATM class
class ATM:
    def __init__(self):
        # Private attributes: balance and PIN
        self.__pin = None
        self.__balance = 0

    # Method to set PIN
    def setPin(self, val: int) -> None:
        self.__pin = val
        print("PIN set successfully")

    # Method to get current balance
    def getBalance(self) -> int:
        return self.__balance

    # Method to deposit money
    def creditAmount(self, val: int) -> None:
        self.__balance += val
        print("Credit successful")

    # Method to withdraw money with PIN verification
    def debitAmount(self, val: int, pin: int) -> None:
        if pin != self.__pin:
            print("PIN mismatch")  # PIN is incorrect
            return
        if val > self.__balance:
            print("Insufficient balance")  # Not enough money
            return
        self.__balance -= val
        print("Debit successful")


# Main function to simulate ATM usage
def main():
    obj = ATM()  # Create an ATM object

    obj.setPin(1234)  # Set PIN

    # Print initial balance
    print("Available balance:", obj.getBalance())

    obj.creditAmount(10000)  # Deposit ₹10000
    print("Available balance:", obj.getBalance())

    obj.debitAmount(5000, 1234)  # Withdraw ₹5000 with correct PIN
    print("Available balance:", obj.getBalance())

    obj.debitAmount(5000, 124)  # Attempt withdrawal with wrong PIN
    print("Available balance:", obj.getBalance())

    obj.debitAmount(10000, 1234)  # Try to withdraw more than balance
    print("Available balance:", obj.getBalance())


# Entry point of the program
if __name__ == "__main__":
    main()
