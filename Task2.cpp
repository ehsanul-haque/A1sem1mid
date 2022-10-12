#include <iostream>

using namespace std;

int main()
{
    //using if else to determine vowel
    char ch;
    cout<<"Enter any letter : ";
    cin>>ch;
    ch=tolower(ch);
    if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
    {
        cout<<ch<<" is Vowel";
    }
    else
    {
        cout<<ch<<" is Consonant";
    }

    //using switch to determine vowel

   /* char ch;
    cout<<"Enter any letter : ";
    cin>>ch;
    ch=tolower(ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout <<ch<< " is Vowel";
            break;
        default:
            cout<<ch<< " is Consonant";

    }*/
    return 0;
}