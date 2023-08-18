#include<iostream>
using namespace std;

int main()
{
    cout<<"test"<<endl;

    int a, b;
    cout<<"Enter first number :"<<" ";
    cin>>a;

    cout<<"Enter second number :"<<" ";
    cin>>b;

    if((a>=0)&&(b>=0))
    {
        cout<<"Sum of the given numbers is : "<<a+b<<endl;
    }
    else
    {
        cout<<"Given number's are not a postitve no.'s ";

    }



    return 0;
    
}