#include<stdio.h>
void main()
{
	int num,i=1,onum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	while(num!=0)
	{
		onum=onum+(num%8)*i;
		num=num/8;
		i=i*10;
	}
	printf(" OCATAL NUMBER%d",onum);
	getch();
}
