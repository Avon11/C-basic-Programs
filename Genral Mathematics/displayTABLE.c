#include<stdio.h>
main()
{
	int a=1,num,z;
	printf("Enter any number :");
	scanf("%d",&num);
	while(a<=10)
	{
		z=num*a;
		printf("%d\n",z);
		a++;
	}
}
