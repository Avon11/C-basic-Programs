#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	(a>=0)?printf("A is positive"):printf("A is negative");
	getch();
}
