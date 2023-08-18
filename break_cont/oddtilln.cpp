#include<iostream>
using namespace std;

int main()
{
    cout<<"test\n";

    int n;
    cout<<"Enter limit of no's to be printed : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            continue;
        }

        cout<<i<<endl;
    }

    return 0;

}