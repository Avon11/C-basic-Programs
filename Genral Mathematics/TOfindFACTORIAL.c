#include<stdio.h>
void main()
{
	float a,i,fact=1;
	printf("Enter the number:");
	scanf("%f",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%f",fact);
}
