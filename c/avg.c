#include<stdio.h>
int main()
{
int avg;
printf("enter avg: ");
scanf("%d",&avg);
if(avg>=70)
{
printf("first class");
}
else if(avg>=60&&avg<70)
{
printf("second class");
}
else if(avg>=50&&avg<60)
{
printf("pass class");
}
else 
{
printf("fail class");
}
}

