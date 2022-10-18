#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;
    bool exit = false;

    while (exit != true)
    {
        // Options
        cout << "\nPlease choose your option:"
                "\n1 = Addition"
                "\n2 = Subtraction"
                "\n3 = Multiplication"
                "\n4 = Division"
                "\n5 = Remainder"
                "\n6 = Square"
                "\n7 = Square root"
                "\n8 = Round up any number"
                "\n9 = Log"
                "\n10 = Power "
                "\n11 = exit"
                "\n\nChoice: ";
        cin >> choice;

        // Check whether the choice is in the given range
        if (choice < 1 || choice > 11)
        {
            cout << "\nPlease choose from the options mentioned below."
                    "\n1 = Addition"
                    "\n2 = Subtraction"
                    "\n3 = Multiplication"
                    "\n4 = Division"
                    "\n5 = Remainder"
                    "\n6 = Square"
                    "\n7 = Square root"
                    "\n8 = Round up any number"
                    "\n9 = Log"
                    "\n10 = Power "
                    "\n11 = exit"
                    "\nChoice: ";
            cin >> choice;
        }
        switch (choice)
        {
        // Addition
        case 1:
            cout << "Enter two numbers: \n";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Sum = " << result << endl;
            break;

        // Subtraction
        case 2:
            cout << "Enter two numbers: \n";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Subtraction = " << result << endl;
            break;

        // Multiplication
        case 3:
            cout << "Enter two numbers: \n";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Product = " << result << endl;
            break;

        // Division
        case 4:
            cout << "Enter Dividend: ";
            cin >> num1;
            cout << "Enter Divisor: ";
            cin >> num2;

            // while loop checks for divisor whether it is zero or not
            while (num2 == 0)
            {
                cout << "\nDivisor cannot be zero."
                        "\nEnter divisor once again: "
                     << endl;
                cin >> num2;
            }
            result = num1 / num2;
            cout << "\nResult = " << result << endl;
            break;
        // Remainder
        case 5:

            cout << "Enter two numbers: \n";
            cin >> num1 >> num2;
            result = (int)num1 % (int)num2;
            cout << "Remainder = " << result << endl;
            break;

        // Square
        case 6:
            cout << "Enter any number: " << endl;
            cin >> num1;
            result = num1 * num1;
            cout << "Square of " << num1 << " = " << result << endl;
            break;
        // Square root
        case 7:

            cout << "Enter any number: " << endl;
            cin >> num1;
            cout << "Squre root of " << num1 << " = " << sqrt(num1) << endl;
            break;
        // Round up any number
        case 8:

            cout << "Enter any number: " << endl;
            cin >> num1;
            cout << "Round up of " << num1 << " is = " << round(num1) << endl;
            break;
        // Log
        case 9:

            cout << "Enter any number: " << endl;
            cin >> num1;
            cout << "Log(" << num1 << ") = " << log(num1) << endl;
            break;
        // Power
        case 10:

            cout << "Enter base number: " << endl;
            cin >> num1;
            cout << "Enter exponent number: " << endl;
            cin >> num2;
            cout << num1 << " to the power " << num2 << " = " << pow(num1, num2) << endl;
            break;
        // exit
        case 11:

            exit = true;
            return 0;

        default:
            cout << "\nError";
        }
    }
}