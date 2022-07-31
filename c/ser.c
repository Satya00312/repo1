//searching in programm//
#include<stdio.h>
#include<conio.h>
#include<string.h>
   void main()
{ struct emp
{
char s_name[20];
int age;
};
struct emp e[3] ; int i,n;
for(i=0;i<3;i++)
{scanf("%d",&e[i].age);
scanf("%s",&e[i].s_name);
}
for(i=0;i<3;i++)
{printf("%d",e[i].age);
printf("%s",e[i].s_name);
}
printf("\nEnter name: ");
scanf("%d",&n);
for(i=0;i<3;i++)
{if(e[i].s_name==n){printf("%d",e[i]);}
}
getch();
}
