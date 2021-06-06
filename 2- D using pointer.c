#include<stdio.h>
main()
{
	int s[4][2]={
	{1234,56},
	{12345,567},
	{123456,5678},
	{1234567,56789}
	};
	int i,j,*ptr;
	for(i=0;i<=3;i++)
	{
		ptr=s[i];
		printf("\n");
		for(j=0;j<=1;j++)
		printf("%d  ",*(ptr+j));
	}
	return 0;
}
