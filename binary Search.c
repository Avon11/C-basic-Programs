#include<stdio.h>
void main()
{
	int a[10],i,mid,end=5,first=0,ele,loc;
	printf("Enter Shorted Array:");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("\nEnter the elment you want to search:");
	scanf("%d",&ele);
	
	while(first<=end)
	{
		mid=(first+end)/2;
		if(a[mid]==ele)
		{
			loc=mid+1;
			break;
		}
		else if(a[mid]<ele)
		{
			first=mid+1;	
		}
		else
		{
		end=mid-1;
	    }
	}
	printf("Elemnt found at location %d",loc);
}
