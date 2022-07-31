#include<stdio.h>
int main()
{
int p,q;
printf("enter p,q values: ");
scanf("%d%d",&p,&q);
p=q++;
p=++q;
p=q--;
p=--q;
printf("%d%d",p,q);
}
