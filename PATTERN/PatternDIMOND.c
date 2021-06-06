#include<stdio.h>
void setw(n)
{
	int s;
	for(s=1;s<=n;s++)
	{
		printf(" ");
	}
}
main()
{
	int i,j,k,l,m,p,q,s;
	for(i=1;i<=5;i++)
	{
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=i;j<=i;j++)
		{
			printf("*");
		}
		for(l=i-2;l<i;l++)
		{
			setw(l);
		}
		for(m==0;m<i-1;m++)
		{
			printf("*");
		}
			printf("\n");
	}
	for(p=1;p<5;p++)
	{
		setw(p);
		printf("*");
		
		printf("\n");
    
}
	
}
