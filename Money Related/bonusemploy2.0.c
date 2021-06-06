#include<stdio.h>
void main()
{
	char g;
	int sal,bonus=0;
	printf("Enter your gender:");
	scanf( " %c",&g);
	printf("\nEnter your salary:");
	scanf("%d",&sal);
	if(g=='m')
	{
		if(sal>1000)
		{
		
		bonus=1000;
	    }
	    if(sal<10000&&sal>5000)
	    {
	    	bonus=500;;
		}
		if(sal<5000)
		{
			bonus=100;
		}
	}
	else
	
		if(sal>10000)
		{
			bonus=100;
		}
		if(sal<10000&&sal>5000)
		{
			bonus=50;
		}
		if(sal<5000)
		{
			bonus=10;
		}
	printf("\nBONUS IS:%d",bonus);
	getch();
}
