//WAP to find minimum & maximum numbers among three numbers using selection statements//
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)
 	{ 	printf("a is maximum\n");	}
	if (a<b&&a<c)
	{	printf("a is minimum\n");	}	
	if (b>a&&b>c)
	{	printf("b is maximum\n");	}
	if (b<a&&b<c)
	{	printf("b is minimum\n");	}
	if (c>b&&c>a)
	{	printf("c is maximum\n");	}
	else  
	{	printf("c is minimum\n");	}
		return 0;
	}
