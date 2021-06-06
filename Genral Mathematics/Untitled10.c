#include<stdio.h>
void main()
{
	int i;
	printf("Enter either 1 or 2");
	scanf("%d",&i);
	if(i==1)
	{
		printf("\nYou would go to heaven ! ");
	}
	else
	{
		if(i==2)
		printf("\nHell was created with you in mind");
		else
		printf("\nHow about mother earth!");
	}
	getch();
}
