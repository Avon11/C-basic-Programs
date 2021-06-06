
#include<stdio.h>
void main()
{
	int i,j,k;
	char c=' ';
	for(i=1;i<=5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf("%c",c);
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		k=1;
		printf("\n");
	}
	getch();
}
