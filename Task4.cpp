#include <iostream>
using namespace std;

int main(){
    float m, ft;
    
    cout << "Enter the length in meter: ";
    cin >> m;
    
    ft = m * 3.28084;
    cout <<m<< " Meter = " << ft <<" foot"<< endl;
    
    return 0;
}