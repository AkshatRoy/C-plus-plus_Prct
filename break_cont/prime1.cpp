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