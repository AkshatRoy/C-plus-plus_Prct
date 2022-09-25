#include <iostream>
using namespace std;

int main(){
    int num, i=2, lower_limit, upper_limit;
    cout<<"Enter Lower Limit";
    cin>>lower_limit;
    cout<<"Enter Upper Limit";
    cin>>upper_limit;

    cout<<"In the given range from"<<lower_limit<<" to "<<upper_limit<<endl;
    
    while(lower_limit<=upper_limit){
        while(i<lower_limit/2){
            if(lower_limit%i == 0){
                continue;
            }
            cout<<lower_limit <<" is a Prime Number"<<endl;     

            i= i+1;
        }
        lower_limit=lower_limit+1;
        
    }

    return 0;
}