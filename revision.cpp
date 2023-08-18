#include<iostream>
using namespace std;

int main()
{
    int n, a;
   
    cout<<"Hello\n";
   
    cin>>n;
    cin>>a;

    if(a>n){
        cout<<a<<" is Greater than "<<n<<endl;

    }
    else if(n>a){
        cout<<n<<" is Greater than "<<a<<endl;
    }
    else{
        cout<<"Both No's "<<a<<" and "<<n<<" are Equal"<<endl;
    }   
    cout<<n<<endl;
    

    return 0;
}

