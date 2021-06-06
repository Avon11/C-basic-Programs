#include<stdio.h>
main()
{
	int a,a1,b,i,pw=1;
	printf("Enter number:");
	scanf("%d",&a);
	printf("\nEnter its power:");
	scanf("%d",&b);
	a1=a;
	for(i=1;i<b;i++)
	{
		pw=a1*a;
		a1=pw;
	}
	printf("Result is:%d",pw);
	
}
