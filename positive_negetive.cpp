#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter a Number:";
    cin>>a;

    if(a>0)
        cout<<"No. is Positive";
    else if(a<0)
        cout<<"No. is Negetive";
    else    
        cout<<"Number is Zero";

    return 0;
}
