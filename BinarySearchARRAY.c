#include<stdio.h>
main()
{
	int i,n,mid,beg=0,end=0,arr[20],ele,loc;
	printf("Enter Size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nArray[%d]",i);
		scanf("%d",&arr[i]);	
	}	
	printf("\nEnter element you  want to search:");
	scanf("%d",&ele);
	end=n;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==ele)
		{
			loc=mid+1;
			break;
		}
		else if(arr[mid]>ele)
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		
	}
	printf("Element found at %d location.",loc);
	
}
