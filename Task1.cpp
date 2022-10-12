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
