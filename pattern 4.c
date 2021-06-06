#include<stdio.h>
main()
{
	int i,j,k,c=0;
	for(i=0;i<=5;i++)
	{
			if(i%2!=1)
			{
				for(j=0;j<=i;j++)
				{
					if(j!=0)
					printf("*%d",++c);
					else
					printf("%d",++c);
				}
			
			}
			else
			{
				for(k=0;k<=i;k++)
				{
					if(k!=0)
					printf("*%d",c--);
					else
					printf("%d",c--);
				}
			}
			if(i%2==0)
				c=c+(i+2);
			else
				c=c+(i+1);	
			
	
		printf("\n");
	} 
}
