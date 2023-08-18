#include<iostream>
using namespace std;

int main(){
    int n,j,i;
    cout<<"Enter the No. of rows : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        int k=i;
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(; j<=n; j++){
            cout<<k<<" ";
            k--;
        }
        k=1;
        for(;j<=n;j++){
            cout<<k<<" *";
            k++;
        }
        for(; j<=(2*n-1); j++){
            cout<<" *";
        }
        cout<<endl;


    }

    return 0;
}