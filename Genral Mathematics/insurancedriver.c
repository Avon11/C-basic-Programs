#include<stdio.h>
void main()
{
	char sex,ms;
	int age;
	printf("Enter age,sex,marital status");
	scanf("%d%c%c",&age,&sex,&ms);
	if(sex=='m')
		{
			if(age>30)
			printf("\nDriver is insured");
			else
			printf("\nDriver is not insured");
		}
	else
		{
			if(age>25)
				printf("\nDriver is insured");
			else
				printf("\nDriver is not insured");	
		}
	getch();
}
