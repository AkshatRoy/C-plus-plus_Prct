#include <iostream>
using namespace std;

int main(){
    int a,b,sum=0;

    cout<<"Enter Lower Limit:";
    cin>>a;
    cout<<"Enter Upper Limit:";
    cin>>b;

    while(a<=b){
        sum=sum+a;
        a=a+1;
    }
    
    cout<<"Sum is:"<<sum;
}