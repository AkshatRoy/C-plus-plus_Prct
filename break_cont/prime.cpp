#include<iostream>
using namespace std;

int main()
{
    cout<<"test\n";

    int a;
    cout<<"Enter no. tp be checked : ";
    cin>>a;
    
    int i;
    for(i=2; i<a; i++)
    {
        if(a%i==0){
            cout<<a<<" is not a prime no.\n";
            break;
        }

        if(i=a)
        {
            cout<<a<<" is a prime no.\n";
        }
    }

    return 0;
}