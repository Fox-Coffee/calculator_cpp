#include <iostream>

using namespace std;

double num1;
double num2;
int op;
double final;

int main()
{
    cout<<"Welcome to the Calculator app!"<<endl<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;

    cout<<"Choose the operation\n > 1. Addition\n > 2. Subtraction\n > 3. Multiplication\n > 4. Division"<<endl;
    cin>>op;

    switch (op) {
        case 1:
            final = num1+num2;
            break;
        case 2:
            final = num1-num2;
            break;
        case 3:
            final = num1*num2;
            break;
        case 4:
            final = num1/num2;
            break;
        default:
            cout<<"Incorrect operation";
            return 1;
    }
    cout<<"The result is: "<<final;

    return 0;
}
