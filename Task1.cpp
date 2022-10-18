#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, large, small;

    cout << "Enter the three numbers: ";
    cin >> num1 >> num2 >> num3;

    if ((num1 > num2) && (num1 > num3))
    {
        large = num1;
    }
    else if (num2 > num3)
    {
        large = num2;
    }
    else
    {
        large = num3;
    }
    if (large % 2 == 0)
    {
        cout << "largest: " << large << ", it is even" << endl;
    }
    else
    {
        cout << "largest: " << large << ", it is odd" << endl;
    }

    if ((num1 < num2) && (num1 < num3))
    {

        small = num1;
    }
    else if (num2 < num3)
    {

        small = num2;
    }
    else
    {

        small = num3;
    }
    if (small % 2 == 0)
    {
        cout << "smallest: " << small << ", it is even" << endl;
    }
    else
    {
        cout << "smallest: " << small << ", it is odd" << endl;
    }

    return 0;
}
/*
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max, min;

    cout << "Enter 1st Number\n";
    cin >> a;
    cout << "Enter 2nd Number\n";
    cin >> b;
    cout << "Enter 3rd Number\n";
    cin >> c;

    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if (b > c)
            max = b;
        else
            max = c;
    }

    if (a < b)
    {
        if (a < c)
            min = a;
        else
            min = c;
    }
    else
    {
        if (b < c)
            min = b;
        else
            min = c;
    }
    if (max % 2 == 0)
    {
        cout << "Largest number is : " << max << ", it is even" << endl;
    }
    else
    {
        cout << "Largest number is : " << max << ", it is odd" << endl;
    }
    if (min % 2 == 0)
    {
        cout << "smallest number is : " << min << ", it is even" << endl;
    }
    else
    {
        cout << "smallest number is : " << min << ", it is odd" << endl;
    }

    return 0;
}
*/
