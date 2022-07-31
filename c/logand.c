#include<stdio.h> void main()
{
int sub1,sub2,sub3,res;
printf(“\n enter marks in three subjects”);
 scanf(“%d%d”,&sub1,&sub2,&sub3);
 res=sub1>=35&&sub2>=35&&sub3>=35;
 printf(“\n result (1-pass/0-fail) is %d”,res); }
