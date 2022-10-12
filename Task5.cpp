#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}