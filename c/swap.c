// to swap two numbers using third variable//
#include<stdio.h>
int main()
{
int a,b,c;
printf(" the a value is :\n  ");
printf("the b value is :\n ");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("finally a value is%d\n finally b value is %d\n",a,b);
}
