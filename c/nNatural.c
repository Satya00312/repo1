#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n,i,result;
  scanf("%d",&n);
  result=(( n*(n+1))/2);
  printf("The first %d natural numbers are:\n",n);

  for(i=1; i<=n; i++)
  {
  printf("%d ",  i);
   
  }
  printf("\n");
  
  printf("The Sum of natural numbers upto %d terms : %d\n ",n,result);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

