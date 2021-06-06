#include<stdio.h>
 main()
{
	float i,j,k,f=1,num=0;
	for(i=1;i<=7;i++)
	{
		for(j=i;j<=i;j++)
		{
			f=f*i;
		}
		k=i/f;
		num+=k;
	}
	
	printf("SUM OF SERIES:%f",num);
}
