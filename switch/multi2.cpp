#include<iostream>
using namespace std;

int main()
{
    cout<<"test\n";

    int a ;
    cout<<"Enter a number : ";
    cin>>a;

    switch (a%2)
    {
    case 0:
        cout<<"Multiple of 2"<<endl;
        break;
    
    default:
        cout<<"Not a multiple of 2";
        break;
    }

    return 0;

}