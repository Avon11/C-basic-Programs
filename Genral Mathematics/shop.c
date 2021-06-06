#include<stdio.h>
void main()
{
	float bp,p,sp,one;
	printf("Enter the base price of item:");
	scanf("%f",&bp);
	printf("\nEnter profit on item:");
	scanf("%f",&p);
	sp=bp+((bp*p)/100);
	one=sp/15;
	printf("\nSelling price of all items is:%f",sp);
	printf("\nSelling price of one item is:%f",one);
	getch();
}
