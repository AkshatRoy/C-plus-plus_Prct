#include<iostream>
using namespace std;

 // prime no.'s till the limit 

int main()
{
   int a;
   cout<<"Enter limit : ";
   cin>>a;

   

    for( int num =1;num<=a; num++){
        for(int i=2; i<num; i++)
         {
       if(a%i==0){
           continue;
       }
       cout<<i<<endl;

       }
    }
   
   

    return 0;
}