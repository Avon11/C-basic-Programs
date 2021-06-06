#include<stdio.h>
void main()
{
	int a;
	printf("Time dalo bhiya:");
	scanf("%d",&a);
	if(a>6&&a<12)
	
	{
		printf("Good morning LPU");
	}
	if(a>12&&a<18)
	{
		printf("Good Afternoon LPU");
		
	}
	if(a>18&&a<24)
	{
		printf("Good NIght LPU");
	}
	
    

    else
    	printf("time is out of zone");
    getch();	
}
