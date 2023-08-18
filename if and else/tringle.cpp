#include<iostream>;
using namespace std;

int main()
{
   
    int a,b,c; 
    cout<<"Enter sides 1 :";
    cin>>a;
    cout<<endl;

   

    cout<<"Enter sides 2 :";
    cin>>b;
    cout<<endl;
    
   
    cout<<"Enter sides 3 :";
    cin>>c;
    cout<<endl;

    cout<<a, b, c;

    if (a==b && b==c && c==a)
    {
        cout<<"Given is a Equilateral Triangle"<<endl;
    }

    else if(a==b || b==c || c==a)
    {
        cout<<"Given is a Isocless Triangle"<<endl;
    }

    else
    {
        cout<<"Given is a Scaleen Tringle"<<endl;
    }
    return 0;
}