#include<stdio.h>
void main()
{
	int amt,x100,y50,z10,a,b,c;
	printf("Enter the amount:");
	scanf("%d",&amt);
	a=amt/100;
	x100=a%10;
	c=amt-(x100*100);
	y50=c/50;
	c=c-(y50*50);
	b=c/10;
	z10=b%10;
	printf("\nNumber of 100 notes=%d",x100);
	printf("\nNumber of 50 notes =%d",y50);
	printf("\nNumber if 10 notes =%d",z10);
	getch();
	
}
