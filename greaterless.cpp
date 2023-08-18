#include<stdio.h>
using namespace std;


int main()
{
    int a, n=0;
    printf("Enter a Value : ");
    scanf("%d", &a);

    switch(a>0)
    {
        case 1:
            printf("Given +ve");
            break;
        case 0:
            printf("Given 0");
            break;
        
        default:
            printf("Given -ve");
            break;
            

         
    }


}