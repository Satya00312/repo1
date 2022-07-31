#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a,b,c values: ");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c)?printf(" a is maximum %d\n ",a):
(b>c&&b>a)?printf(" b is maximum %d\n ",b):
(c>a&&c>b)?printf(" c is maximum %d\n ",c):
printf("the end");
}
