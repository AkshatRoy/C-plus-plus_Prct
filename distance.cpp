#include<stdio.h>
#include<math.h>
int main(){

 float x,y,x1,y1,dis;
 
 printf("enter the value of x");
 scanf("%f",&x);
printf("enter the value of y");
scanf("%f",&y);

 printf("enter the value of x1");
 scanf("%f",&x1);
printf("enter the value of y1");
scanf("%f",&y1);

dis=sqrt((x1-x)(x1-x)+(y1-y)(y1-y));
 printf("enter the value of dis");
 printf("%f",dis);
 return 0;
 }
