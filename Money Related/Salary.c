#include<stdio.h>
void main()
{
	float bs,gs,da,ha;
	printf ("Enter your basic salary:");
	scanf("%f",&bs);
	da=bs*2/5;
	ha=bs*1/5;
	printf("\nYour Dearness allounce is :%f",da);
	printf("\nYour housing allounce is :%f",ha);
	gs=bs+ha+da;
	printf("\nGross salary is:%f",gs);
	getch();
}
