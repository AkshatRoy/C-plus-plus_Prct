#include<iostream>
using namespace std;

#define TRGLAREA(a,b) (0.5*a*b)
int main(){

    int l1,l2, area; 
    cout<<"Enter Line 1 : ";
    cin>>l1; 
    cout<<"Enter Line 1 : ";
    cin>>l2;

    area = TRGLAREA(l1,l2); 
    cout<<"Area of traingle : "<< area <<endl;



    return 0;

}