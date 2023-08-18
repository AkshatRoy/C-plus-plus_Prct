//Simple Calculator using switch 
#include<iostream>
using namespace std;

int main()
{

    cout<<"Test"<<endl;
    int a,b;
cout<<"Enter Value to be calculated : ";
    cin>>a;

cout<<"Enter Value to be calculated : ";
    cin>>b;

char c;
cout<<"Enter Operator : ";
cin>>c;

switch (c)
{
    case '-':
        cout<<"Diffrence is : "<<a-b<<endl;
        break;
    case '*':
        cout<<"Product is : "<<a*b<<endl;
        break;
    case '+':
        cout<<"Sum is : "<<a+b<<endl;
        break;
    case '/':
        cout<<"Division is : "<<a/b<<endl;
        break;

    default:
    cout<<"Enter a Operator from +,-,*,/";
        break;
    }

    return 0;

}