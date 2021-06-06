#include<stdio.h>
void main()
{
	int val;
	char z;
	while(val<=255)
	{
		z=val;
		printf("%c%d\t",z,val);
		val++;
	}
	getch();
}
