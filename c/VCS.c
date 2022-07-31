#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char ch;
  scanf("%c",&ch);
  switch(ch)
  {
    case 'a':
      printf("a is a Vowel");
      break;
    case 'e':
      printf("e is a Vowel");
      break;
    case 'i':
      printf("i is a Vowel");
      break;
    case 'o':
      printf("o is a Vowel");
      break;
    case 'u':
      printf("u is a Vowel");
      break;
    case 'A':
      printf("A is a Vowel");
      break;
    case 'E':
      printf("E is a Vowel");
      break;
    case 'I':
      printf("I is a Vowel");
      break;
    case 'O':
      printf("O is a Vowel");
      break;
    case 'U':
      printf("U is a Vowel");
      break;
    default:
      printf("%c is a Consonant",ch);
  }
      
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

