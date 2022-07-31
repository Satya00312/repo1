//logical operators//
#include<stdio.h>
int main()
{
int a=3,b=4,result;
result=(a==b)||(b>a);
printf("logical OR between two numbers is %d\n",result);
result=(a==b)&&(b<a);
printf("logical AND between two numbers is %d\n",result);
result=!(a!=b);
printf("logical NOT between first number is %d\n",result);
}
