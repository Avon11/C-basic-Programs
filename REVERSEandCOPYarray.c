#include<stdio.h>
main()
{
	int a1[5],a2[5];
	int i,j,k;
	printf("Enter element of an array:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d element:",i);
		scanf("%d",&a1[i]);
	}
	printf("\nArray 1 is:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a1[i]);
			a2[i]=a1[i];
	}
	printf("\nArray 2 is:");
	for(i=4;i>=0;i--)
	{
		printf("%d ",a2[i]);
	}
}
