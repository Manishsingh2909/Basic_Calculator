
#include<stdio.h>
#include<conio.h>
int main ()
{
 int val1,val2,val3,val4,option;
 
 printf("Enter 1st value : ");
 scanf("%d",&val1);
 printf("Enter 2nd Value : ");
 scanf("%d",&val2);
 printf("1) for Addition \n2) for Sub \n3) for multiplication \n4) for division ");
 printf("\n\tEnter option : ");
 scanf("%d",&option);
// 
  switch(option){
  	
  	case 1:
  		printf("Add :%d ",(val1+val2));
  		break;
  	case 2:
  		printf("Sub :%d ",(val1-val2));
  		break;
  	case 3:
	  	printf("multiplication :%d", (val1*val2));
	  	break;
	case 4:
		printf("division :%d", (val1/val2));
		break;
	default:
  		printf("Invalid");
  	}

}

