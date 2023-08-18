#include<iostream>
using namespace std;

int main()
{
    cout<<"Limit for addition"<<endl;
    int n;
    cin>>n;

    int sum=0;
    int count=0;
    while(count<=n){
        cout<<(sum+count)<< " ";
        count++;
    }
    

    return 0;
}