#include<stdio.h>
void main()
{
	int num,a,b,c,d,e,f;
	printf("Enter a 5 digit number:");
	scanf("%d",&num);
	a=num%10;
	a=a+1;
	num=num/10;
	b=num%10;
	b=b+1;
	num=num/10;
	c=num%10;
	c=c+1;
	num=num/10;
	d=num%10;
	d=d+1;
	num=num/10;
	e=num%10;
	e=e+1;
	f=((e*10000)+(d*1000)+(c*100)+(b*10)+a);
	printf("\nAfter addtion of 1 in each digit new number is:%d",f);
	getch();
}
