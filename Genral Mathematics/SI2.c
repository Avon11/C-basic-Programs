#include<stdio.h>
void main()
{
	int p,n;
	float r,si;
	printf("/nenter the value of p,n,r");
	scanf("%d,%d,%f",&p,&n,&r);
	si=p*n*r/100;
	printf("%f",si);
	getch();
}
