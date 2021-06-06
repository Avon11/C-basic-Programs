#include<stdio.h>
void main()
{
	int a;
	printf("Enter year:");
	scanf("%d",&a);
	if(a%4==0&& a%100!=0|| a%400==0)
	{
		printf("Year is leap year");
	}
	else
	printf("Year is not leap year");
	getch();
	
}
