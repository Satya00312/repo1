//to find compound interest//
#include<stdio.h>
#include<math.h>
int main()
{
 
float ci,p,r,n;
printf("enter p,r,n values: ");
scanf("%f%f%f",&p,&r,&n);
ci=p*pow((1+r/100),n)-p;
printf("%f\n",ci);
}
