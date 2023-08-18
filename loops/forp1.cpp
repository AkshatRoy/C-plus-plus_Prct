#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Limit"<< endl;
    cin>>n;

    int count=0;

    for(int sum=1; count<n; count++){
        cout<<sum<<" ";
        sum++;
    }
    return 0;
}