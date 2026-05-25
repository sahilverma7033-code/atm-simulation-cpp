#include <iostream>
using namespace std;

int main() {
    int pin = 9444;
    int enteredPin;
    int balance = 500;
    int choice, amount;

    cout << "===== ATM SIMULATION =====" << endl;

    cout << "Enter ATM PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin) {

        do {
            cout << "\n----- MENU -----" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            switch(choice) {

                case 1:
                    cout << "Your Balance is: ₹" << balance << endl;
                    break;

                case 2:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    balance += amount;
                    cout << "Money Deposited Successfully!" << endl;
                    break;

                case 3:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;

                    if(amount <= balance) {
                        balance -= amount;
                        cout << "Please collect your cash." << endl;
                    } else {
                        cout << "Insufficient Balance!" << endl;
                    }
                    break;

                case 4:
                    cout << "Thank You for using ATM!" << endl;
                    break;

                default:
                    cout << "Invalid Choice!" << endl;
            }

        } while(choice != 4);

    } else {
        cout << "Wrong PIN!" << endl;
    }

    return 0;
}