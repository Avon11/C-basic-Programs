#include<stdio.h>
int swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
	printf("x%d y%d",*x,*y);
}
main()
{
	int a=2,b=5;
    swap(&a,&b);
	printf("   a%d     b%d",a,b);
}
