#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	printf("Enter size of pattern u want:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			printf("%c",(char)(j+64));
		}
		for(k=3-i;k<=i;k++)
		{
				printf(" ");
		}
		for(j=n-i+1;j>=1;j--)
		{
			printf("%c",(char)(j+64));
			
		}
			
		
	printf("\n");	
}
	getch();
}
