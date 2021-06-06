#include<stdio.h>
void main()
{
	int pen,book,copy,bill;
	printf("Enter the quantity of pen:");
	scanf("%d",&pen);
	printf("\nEnter the quantity of Book:");
	scanf("%d",&book);
	printf("\nEnter the quantity of notebook:");
	scanf("%d",&copy);
	bill=(pen*10)+(book*20)+(copy*15);
	printf("your bill is:%d",bill);
	getch();
	
}
