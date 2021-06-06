#include<stdio.h>
void main()
{
	int quantity,price,bill,discount;
	printf("Enter the quantity of item:");
	scanf("%d",&quantity);
	printf("\nEnter the price of item:");
	scanf("%d",&price);
	if(quantity>1000)
	{
		discount=(quantity*price)*0.1;
		bill=quantity*price-(discount);
		printf("\nDiscount=$%d",discount);
		printf("\nYou have to pay:$%d",bill);
	}
	else
	bill=price*quantity;
	printf("\nYou have to pay:$%d",bill);
	getch();
}
