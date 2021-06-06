#include<stdio.h>
void main()
{
	int num,a,b,c,d,e,sum;
	printf("Enter a five digit number:");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	e=num%10;
	sum =a+b+c+d+e;
	printf("\nSum of digits=%d",sum);
	getch();
}
