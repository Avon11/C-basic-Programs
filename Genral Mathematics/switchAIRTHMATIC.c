#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("\nEnter 2nd number:");
	scanf("%d",&b);
	printf("\n 1 for addition.");
	printf("\n 2 for multiplication.");
	printf("\n 3 for substration.");
	printf("\n Enter your choice:");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			c=a+b;
			printf("Addition is =%d",c);
			break;
		case 2:
			c=a*b;
			printf("Multiplication is=%d",c);
			break;
		case 3:
			c=b-a;
			printf("Substraction is=%d",c);
			break;
			default:
			printf("wrong value");
			break;		
	}
	getch();
}
