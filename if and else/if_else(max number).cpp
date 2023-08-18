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
            cout<<"A is the largest value\n";
        }
        else{
            cout<<"C is teh largest value\n";
        }
    }    
    else{
        if(b>c){
            cout<<"B is the largest number\n";}

        else{
            cout<<"C is teh largest value\n";
        }
        
       
        
    }  
    return 0;
    
} 

