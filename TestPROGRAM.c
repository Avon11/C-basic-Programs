#include<stdio.h>
#include<math.h>
 main()
{
	int i,n,a[20][20],j,sum1=0,sum2=0;
	printf("\nEnter the 2-D Array:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
}
}
    printf("\nsum of 1st diagonal:");
    	for(i=0;i<3;i++)
    	{
    		for(j=0;j<3;j++)
    		{
    			if(i==j)
    			{
    				sum1+=a[i][j];
				}
			}
		}
	printf("\nSum of 1st diagonal is=%d",sum1);
	printf("\nSum of 2nd Diagonal:");
		for(i=3;i>0;i--)
    	{
    		for(j=0;j<3;j++)
    		{
    			{
    				sum2+=a[i][j];
				}
			}
		}
	printf("\nSum of 2nd Diagonal is=%d",sum2);

}
