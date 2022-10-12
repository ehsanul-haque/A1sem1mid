#include <iostream>
using namespace std;

// Main program
main()
{
    int choice;

    cout << "Press 1 for addition" << endl;
    cout << "Press 2 for Subtraction" << endl;
    cout << "Press 3 for Multiplication" << endl;
    cout << "Press 4 for addition" << endl;
    cin >> choice;
    switch (choice)
    {

    case 1:

    {
        int i, n, num, sum = 0;
        cout << "How many numbers you want to Add ? ";
        cin >> n;
        cout << "Enter " << n << " numbers: ";
        for (i = 0; i < n; i++)
        {
            cin >> num;
            sum = sum + num;
        }
        cout << "\nSum of all " << n << " numbers is " << sum;
        cout << endl;
    }
    break;

        case 2:

    /*{
        int i, n, num, sub = 0;
        cout << "How many numbers you want to subscract ? ";
        cin >> n;
        cout << "Enter " << n << " numbers: ";
        for (i = 0; i < n; i++)
        {
            cin >> num;
            if(i=0){num=sum}
            temp = sum + num;
            
        }
        cout << "\nSum of all " << n << " numbers is " << sum;
        cout << endl;
    }*/
    break;

    case 3:

    {
        int i, n, num, mult = 1;
        cout << "How many numbers you want to multiply ? ";
        cin >> n;
        cout << "Enter " << n << " numbers: ";
        for (i = 0; i < n; i++)
        {
            cin >> num;
            mult = mult * num;
        }
        cout << "\nMultiplication of all " << n << " numbers is " << mult;
        cout << endl;
    }
    break;

    default:
    {
        cout << "Error! operator is not correct";
        break;
    }

        return 0;
    }
}