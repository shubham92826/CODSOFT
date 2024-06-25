// calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    char again;

    do {
        cout << "Calculator by Shubham" << endl;
        cout << "*********************" << endl;
        cout << "I will help you in the following operations:-" << endl;
        
        
        cout << "1. Subtraction" << endl;
        cout << "2. Addition" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Kindly choose the operation you wanna do." << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Goodbye!" << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << fixed << setprecision(2);
        switch (choice) {
            case 1:
                cout << "Result is: " << (num1 - num2) << endl;
                break;
            case 2:
                cout << "Result is: " << (num1 + num2) << endl;
                break;
            case 3:
                cout << "Result is: " << (num1 * num2) << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result is: " << (num1 / num2) << endl;
                } else {
                    cout << "Error-Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid choice.Please choose from 1 to 5." << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    cout << "Thank you for using!" << endl;

    return 0;
}
