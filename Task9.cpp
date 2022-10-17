# include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    char exit='`';
    while(exit!='#')
    {
        cout << "Enter operator either + or - or * or / or % or s or r or R or L or ^  : "<< endl<<"Use # to exit";
        cin >> oper;



        switch(oper)
        {
        case '+':
            cout << "Enter two operands: "<<endl;
            cin >> num1 >> num2;
            cout << num1+num2<<endl;
            break;

        case '-':
            cout << "Enter two operands: "<<endl;
            cin >> num1 >> num2;
            cout << num1-num2<<endl;
            break;

        case '*':
            cout << "Enter two operands: "<<endl;
            cin >> num1 >> num2;
            cout << num1*num2<<endl;
            break;

        case '/':
            cout << "Enter two operands: "<<endl;
            cin >> num1 >> num2;
            cout << num1/num2<<endl;
            break;

        case '%':
            cout << "Enter two operands: "<<endl;
            cin >> num1 >> num2;
            cout << (int)num1/(int)num2<<endl;
            break;

        case 's':
            cout << "Enter one operands: "<<endl;
            cin >> num1 ;
            cout << num1*num1<<endl;
            break;

        case 'r':
            cout << "Enter one operands: "<<endl;
            cin >> num1 ;
            cout << sqrt(num1)<<endl;
            break;

        case 'R':
            cout << "Enter one operands: "<<endl;
            cin >> num1 ;
            cout << round(num1)<<endl;
            break;

        case 'L':
            cout << "Enter one operands: "<<endl;
            cin >> num1 ;
            cout << log(num1)<<endl;
            break;

        case '^':
            cout << "Enter two operands: "<<endl;
            cin >> num1 >> num2;
            cout << pow(num1, num2)<<endl;
            break;

        case '#':
            exit='#';
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct"<<endl;
            break;
        }
    }

    return 0;
}
