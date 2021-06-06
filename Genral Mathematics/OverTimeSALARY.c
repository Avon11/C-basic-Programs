#include<stdio.h>
void main()
{
	int bon,hr,emp,pt;
	for(emp=1;emp<=10;emp++)
	{
		printf("\nEnter working hour of employee:");
		scanf("%d",&hr);
		if(hr>40)
		{	pt=hr-40;
			bon=pt*12;
			printf("\nBonus is:%d",bon);	
		}
		else
		printf("There is no bonus for less than 40 working hour.");
	}
	getch();
	
}
