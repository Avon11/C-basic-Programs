#include<stdio.h>
void main()
{
	int num,a,b,sum;
	printf("Entre a four digit number:");
	scanf("%d",num);
	a=num%10;
	num=num/1000;
	b=num%10;
	sum=a+b;
	printf("\nSum of last and first digit is:%d",sum);
	getch();
		
}
