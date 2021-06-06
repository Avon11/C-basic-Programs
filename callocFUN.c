#include<stdio.h>
#include<stdlib.h>
main()
{
	int *x,i,n;
	printf("How many element you want:");
	scanf("%d",&n);
	x=(float *)calloc(n,sizeof(float));
	if(x!=NULL)
	{
		for(i=0;i<n;i++)
		{
			printf("%d",*(x+i));
		}
	}
	else
	printf("calloc failed");
	getch();
}
