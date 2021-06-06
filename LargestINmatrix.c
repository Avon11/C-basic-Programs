#include<stdio.h>
main()
{
	int arr[5][5];
	int i,j,num=0;
	printf("Enter element of array:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(num<arr[i][j])
			{
				num=arr[i][j];
			}
		}
	}
	printf("Largest no. of aarray is %d",num);
}
