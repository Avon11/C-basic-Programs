#include<stdio.h>
void main()
{
	int num,a,b,c,d,e;
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
	printf("\nNew number is:%d%d%d%d%d",a,b,c,d,e);
	getch();
}
