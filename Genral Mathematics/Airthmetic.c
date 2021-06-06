#include<stdio.h>
void main()
{
	int a,b,sum,multi,div;
	int mod;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	sum=a+b;
	multi=a*b;
	div=b/a;
	mod=b%a;
	printf("\nSum Of two no. is:%d ",sum);
	printf("\nMultipication of two no. is :%d",multi);
	printf("\nDivision of two no. is :%d",div);
	printf("\nModulas of no. is:%d",mod);
	getch();
	
}
