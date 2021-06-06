#include<stdio.h>
void main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	switch(a)
	{
		case 0:
			printf("Monday");
			break;
		case 1:
			printf("tuseday");
			break;
		case 2:
			printf("wednesday");
			break;
		case 3:
			printf("Thrusday");
			break;
		case 4:
			printf("Friday");
			break;
		case 5:
			printf("Saturday");
			break;
		case 6:
			printf("Sunday");
			break;
		default:
			printf("wrong value");
			break;			
	}
	getch();
}
