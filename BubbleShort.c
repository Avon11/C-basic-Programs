#include<stdio.h>
main()
{
	int i,j,k,n,arr[200],temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter array[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(k=0;k<n-1-i;k++)
		{
			if(arr[k]>arr[k+1])
			{
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
			
		}

	}
	printf("Shorted array is:");
	for(i=0;i<n;i++)
	{
		printf("\nArray[%d]=%d",i,arr[i]);
	}

}
