#include<stdio.h>
int main()
{
 int a,b,op;
  printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulardiv\n");
  printf("Enter the values of a & b: ");
  scanf("%d %d",&a,&b);
  printf("Enter your Choice : ");
  scanf("%d",&op);
  switch(op)
  {
    case 1	:
        printf("%d",a+b);
        break;
    case 2	:
        printf(" %d",a-b);
        break;
    case 3	:
        printf(" %d",a*b);
        break;
    case 4	:
        printf(" %d ",a/b);
        break;
    case 5      :
        printf(" %d ",a%b);
        break;
    default	:
        printf(" this is default.");
       }
    return 0;
}

