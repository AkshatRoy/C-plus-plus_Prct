#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"No. to print maultiples off : "<<" ";
    cin>>n;
    cout<<endl;
    
    
    for(int mul=1; (mul<=10); mul++)
    {
        cout<<n<<" x "<<mul<<"="<<" "<<n*mul<<endl;

    }

    return 0;
}
