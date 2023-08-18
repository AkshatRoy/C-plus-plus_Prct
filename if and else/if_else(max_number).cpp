#include<iostream>
using namespace std;

int main()
{
    cout<< "if and else practice\n "; 
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c)
        {
            cout<<a<<" is the largest value"<<endl;
            
        }
        else{
            cout<<c<<" is the largest value"<<endl;
        }
    }    
    else{
        if(b>c){
            cout<<b<<" is the largest value"<<endl;}

        else{
            cout<<c<<" is the largest value"<<endl;
        }
        
       
        
    }  
    return 0;
    
} 

