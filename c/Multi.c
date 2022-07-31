//wap to calc the volumes of cuboid/cube/cylinder/cone/sphere using multi way statement//
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
int l,b,h,r,op;
float volume;
printf(" 1.vol(cuboid)\n 2.vol(cube)\n 3.vol(cylinder)\n 4.vol(cone)\n 5.vol(sphere)\n");
printf("enter l,b,h,r values: ");
scanf("%d%d%d%d",&l,&b,&h,&r);
printf("enter the option: ");
scanf("%d",&op);
switch(op)
{
	case 1: volume=(l*b*h);
	printf("%f\n",volume);
	break;
	case 2: volume=(l*l*l);
	printf("%f\n",volume);
	break;
	case 3 : volume=(pi*r*r*h);
	printf("%f\n",volume);
	break;
	case 4 : volume=((1*pi*r*r*h)/3);
	printf("%f\n",volume);
	break;
	case 5 :volume=((4*pi*r*r*r)/3);
	printf("%f\n",volume);
        break;
        default:
        printf("wrong option");
}
	return 0;
}
