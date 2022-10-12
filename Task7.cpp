#include <iostream>

using namespace std;

int main()
{
    int a, y, x = 2, z = 4;

    cout << "X = " << x << endl<< "Z = " << z << endl << endl;

    y = ++x + ++x + ++x;
    cout << "y= ++x + ++x +++x = " << y << endl;
    a = --z + x++ - --x;
    cout << "a = --z + x++ - --x = " << a << endl;

    return 0;
}