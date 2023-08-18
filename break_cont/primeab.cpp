#include<iostream>
using namespace std;

int main()
{
    cout<<"test"<<endl;

    int a,b;
    cout<<"Enter Lower limit : ";
    cin>>a;
        

    cout<<"Enter Upper limit : ";
    cin>>b;

    if((a>=0)&&(b>=0)) 
    {
       for (int num=a; num<=b; num++) {
        int i;
        for (i=2; i<num; i++) {
        if (num%i==0) { //it is not prime
        break;
        }
        }
        if (i==num) { //loop has completed all iterations
        cout<<num<<endl;
        }
        }
    }

    else if(a<b||a==b){
        cout<<"Check the entered limits\n";

    }

    else{
        cout<<"Please enter Positive limits\n";
    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Enter a Number to be Checked  ";
  cin>>a;

  int i;

  for(i=2; i<a; i++)
  {
      if(a%i==0){
          cout<<"Not a Prime Number";
          break;
      }
      if(a=i){
          cout<<"Prime Number";
      }
     
  }
   if(a==2){
          cout<<"Prime No.";
          
      }

    return 0;
}