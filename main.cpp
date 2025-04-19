#include <iostream>
#include <cmath>    // for power, sqrt
using namespace std;

// Function declarations
void showMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double x);

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << "\n";
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << "\n";
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << "\n";
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0) {
                    cout << "Error: Division by zero!\n";
                } else {
                    cout << "Result: " << divide(num1, num2) << "\n";
                }
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << "\n";
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 < 0) {
                    cout << "Error: Negative number!\n";
                } else {
                    cout << "Result: " << squareRoot(num1) << "\n";
                }
                break;
            case 0:
                cout << "Exiting Calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

        cout << "------------------------\n";
    } while (choice != 0);

    return 0;
}

// Menu function
void showMenu() {
    cout << "\n===== Simple Calculator =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Square Root\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

// Function definitions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double power(double base, double exponent) { return pow(base, exponent); }
double squareRoot(double x) { return sqrt(x); }
