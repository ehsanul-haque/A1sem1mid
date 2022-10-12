#include <iostream>
using namespace std;

int main()

{
    int year,month,day,hour,minute,second;
    cout << "Enter yor age: " ;
    cin >> year;

    month = year * 12;
    day = month * 30;
    hour = day * 24;
    minute = hour * 60;
    second = minute * 60;
    

    cout <<endl<< "You have lived " << month << " months " <<endl<<"Or, "<< day << " days " <<endl<<"Or, "<< hour <<
    " hours " <<endl<<"Or, "<< minute << " minutes " <<endl<<"Or, "<< second << " seconds "<<endl;
    
    
    
    
    return 0;}