#include<stdio.h>
main()
{
	int n1=0,n2,n3,n,i;
	printf("Enter limit of series:");
	scanf("%d",&n);
	printf("%d",n1);
	for(n2=1;n2<=n;n2++)
	{
		n3=n1+n2;
		n3=n3+n2;
		printf("%d",n3);
	}
	
}
