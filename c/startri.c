#include<stdio.h>
int main()
{
int i,s,j,n;
printf("Enter n value: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
	if(i==n&&j==(n-i)||i==n||j==1||i==j||j==n||i==1)
printf("*");
else
printf(" ");}
printf("\n");}
return 0;
}

