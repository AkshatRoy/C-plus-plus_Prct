#include<stdio.h>

int main()
{
int a;
a=f1(10);
printf("%d",a);
}
f1(int b)
{
if(b==0)
return 0;
else
{
printf("a");
f1(b--);
}
}
