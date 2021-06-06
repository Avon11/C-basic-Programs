#include<stdio.h>
void main()
{
	int num,a,b,c,f,sum;
	printf("Enter Number:");
	scanf("%d",&num);
	f=num;
	a=f %10;
	f=f/10;
	b=f%10;
	f=f/10;
	c=f%10;
	sum=(a*a*a)+(b*b*b)+(c*c*c);
	if(sum==num)
	{
		printf("This is a armstrong number:%d",num);
	}
	else
		printf("This is not armstrong number:%d",num);
	getch();	
}
