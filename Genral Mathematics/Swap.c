#include<stdio.h>
void main()
{
	int a,b,c;
	printf ("Enter two number:");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\nA=%d",a);
	printf("\nB=%d",b);
	c=a;
	a=b;
	b=c;
	printf("\nNew A is:%d",a);
	printf("\nNew B is:%d",b);
	getch();
}
