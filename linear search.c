#include<stdio.h>
int main()
{
	int n,i,ele;
	printf("Enter the size o fgthe array:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter array:");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("\n enter elemnt youwant to search:");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
		printf("Element found at %d location:",i);
		break;
	    }
		
	}
	if(i==n)
	printf("Elemnt not found");
	
}
