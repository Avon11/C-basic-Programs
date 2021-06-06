#include<stdio.h>
void main()
{
	int jy,cy,bonus=2500,yr;
	printf("Enter the year of joining:");
	scanf("%d",&jy);
	printf("\nEnter current year:");
	scanf("%d",&cy);
	yr=cy-jy;
	if(yr>3)
	{
		printf("\nYou will get bonus of :$%d",bonus);
	}
	if(yr<3)
	{
		printf("\nYou will not get any bonus.");
	}
	getch();
}
