//WAP to implement bank applications using switch//
#include<stdio.h>
int main()
{
int op;
printf(" 1.Deposit\n 2.Withdraw\n 3.Changepin\n 4.Balance\n 5.Exit\n");
printf("Choose your Option: ");
scanf("%d",&op);
switch(op)
{
	case 1 : 
	printf("Enter the amount to be deposited\n");
	break;
	case 2:
	printf("Enter the amount to be withdrawal\n");
        break;
	case 3:
        printf("Enter the new pin\n");
	break;	
	case 4:
	printf("Balance displayed\n");
	break;
	case 5:
        printf("Thank you, Have a nice day\n");
        break;
       
 	default:
	printf("Invalid Option\n");
}
	return 0;
}
