#include<stdio.h>
void main()
{
	int i,j=0,num;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			j++;
		}
	}
	if(j==2)
	{
		printf("Number is prime number:%d",num);
	}
	else
	
		printf("It is not a prime number:%d",num);
		getch();
}
