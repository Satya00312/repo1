//to print a matrice//
#include<stdio.h>
int main()
{
int a[10][10],i,m,n,j;
printf("Enter m,n values:\n");
scanf("%d%d",&m,&n);
printf("Enter values of matrice:\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}}
printf("The Required Matrice is :\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);}
printf("\n");
}
return 0;
}

