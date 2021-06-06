#include<stdio.h>
void main()
{
	int a[20],i,j,temp;
	printf("Enter Array elemnt:");
	for(i=0;i<10;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Shorted Array is:");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
}
