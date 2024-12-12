//  practical questions
// Q1.Write a program that prompts the user to number. If the number is negative, 
// throw an exception. Catch and handle the exception to display an appropriate message.
#include <iostream>
using namespace std;

int main() 
{
    try {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            throw num;  
        }

        cout << "The number is: " << num << endl;
    } 
    catch (int e) {
        cout << "Error: Negative numbers are not allowed. You entered: " << e << endl;
    }

    return 0;
}



// Q2. Create a simple Bank Account class with method to withdraw money. 
// Throw exception if the withdrawal amount exceeds the account balance.
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

    void checkValidAmount(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount!" << endl;
        }
    }

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        checkValidAmount(amount);
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
            showBalance();   
        }
    }

    void withdraw(double amount) {
        checkValidAmount(amount);
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdraw: " << amount << endl;
            showBalance();   
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        }
    }
};

int main() {
    double initialBalance, depositAmount, withdrawAmount;
    cout << "Enter the initial balance: ";
    cin >> initialBalance;
    BankAccount account(initialBalance);

    int choice;
    do {
        cout << "\nBank Account Menu:\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

       try{  
          switch (choice) {
            case 1:
                account.showBalance();
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;
            case 4:
                cout << "Thank you!!!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
          }
     } catch (string msg) {  
            cout << msg << endl;  
        }
     } while (choice != 4);
       
    return 0;
}