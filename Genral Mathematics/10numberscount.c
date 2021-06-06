#include<stdio.h>
void main()
{
	int a,b=0,c=0,d=0,num;
	
	for(a=1;a<=10;a++)
	{
		printf("Enter 10 numbers:");
		scanf("%d",&num);
		if(num>0)
		{
			b++;
		
		}
		if(num<0)
		{
			c++;
		
		}
		if(num==0)
		{
			d++;
		
		}
	}
		printf("\nNO of positive is:%d",b);
		printf("\nNO. of negative is:%d",c);
			printf("\nNO. of zeros are:%d",d);
	getch();
}
