#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,mul,sum;
	printf("Enter Matrix 1:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Array[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Matrix 2:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Array[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
				sum+=a[i][k]*b[k][j];
		}
		c[i][j]=sum;
		sum=0;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ", 
			c[i][j]);
			printf("\n");
		}
	}
}
