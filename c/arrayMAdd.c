#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,m,n,j;
printf("Enter m,n values:\n");
scanf("%d%d",&m,&n);
printf("Enter values of matrice A\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}}
printf("The Matrice A is\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);}
printf("\n");
}
printf("Enter values of matrice B\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{scanf("%d",&b[i][j]);}}
printf("The  Matrice B is :\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
printf("%d ",b[i][j]);}
printf("\n");}
printf("the final matrice is: \n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
c[i][j]=a[i][j]+b[i][j];
printf("%d ",c[i][j]);}
printf("\n");
}
return 0;
}
