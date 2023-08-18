#include<iostream>
using namespace std;

int main(){

   /*
   //Greatest No.
    cout<<"Practice run"<<endl;
    int a,b,c;
    cout<<"Enter Value 1"<<endl;
    cin>>a;
    cout<<"Enter Value 2"<<endl;
    cin>>b;
    cout<<"Enter Value 3"<<endl;
    cin>>c;

    if (a>b){
        if(a>c){
            cout<<"A is the greatest No."<<endl;
            
        }
    }
    if (b>a){
        if(b>c){
            cout<<"B is the greatest No."<<endl;
         }
    }
    else{
        cout<<"C is the Greatest No."<<endl;
    }

=========================================

    //Sides of Traingle
    int a, b ,c; 
    cout<<"Enter sides"<<endl;

    cout<<"Side 1: ";
    cin>>a;

    cout<<"Side 2: ";
    cin>>b;
    
    cout<<"Side 3: ";
    cin>>c;

    if(a==b && b==c && a==c){
        cout<<"Given is a Equilateral Triangle"<<endl;

    }
    else if(a==b || b==c || a==c){
        cout<<"Given is a Scallen Triangle"<<endl;
    }
    else{
        cout<<"Given is a Isocellies Triangle"<<endl;
    }

==================================================
  

    //Print Odd No.'s till n number
    int a;
    cout<<"Enter the Limit till series should be printed :";
    cin>>a;

    for( int i = 1; i<=a; i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    
===============================================
 
    // Check Prime No's
    int a;
    cout<<"Enter No. to be Checked : ";
    cin>>a;

    for(int i=2; i<=a; i++){
        if(a==2){
            cout<<"Given No. is a Prime No."<<endl;
            break;
        }
        else if(a%i==0){
            cout<<"Given No. is not a Prime No."<<endl;
            break;
            
        }
        else{
            cout<<"Given No. is a Prime No."<<endl;
            break;
        }
    }
====================================================
*/

//Prime No. till the given Limit

    int a;
    cout<<"Enter the Limit : ";
    cin>>a;

    for(int i=2; i<=a; i++){
        if(a==2){
            cout<<"Given No. is a Prime No."<<endl;
            cout<<i<<endl;
            
            //break;
        }
        else if(a%i==0){
            cout<<"Given No. is not a Prime No."<<endl;
            cout<<i<<endl;
            //break;
            
        }
        else{
            cout<<"Given No. is a Prime No."<<endl;
            cout<<i<<endl;
            //break;
        }
    }
    return 0;
}