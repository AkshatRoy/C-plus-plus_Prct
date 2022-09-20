#include <iostream>
using namespace std;

int main(){
    int num, i=2;
    cout<<"Enter a Number to be checked:";
    cin>>num;

    while(i<num){
        if(num%i == 0){
            cout<<"This number is not a Prime Number";
            return 0;
        }      

        i= i+1;
    }
    cout<<"This number is a Prime Number";

    return 0;
}