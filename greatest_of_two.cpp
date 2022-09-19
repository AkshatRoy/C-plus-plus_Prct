#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter 1st Digit:";
    cin>>a;
    cout<<"Enter 2nd Digit:";
    cin>>b;

    if(a==b)
        cout<<"1st is equal to 2nd";

    else if(a>b)
        cout<<"1st Greater than 2nd";

    else
        cout<<"2nd Greater than 1st";

}