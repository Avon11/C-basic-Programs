#include<stdio.h>
int century(int x)
{
	int i;
	char p='m';
	for(i=1;i<=x;i++)
	printf("%c",p);		
}
int hundred(int y)
{
	int j;
	char p='d',q='c';
	if(y>=5)
	{
		printf("%c",p);
		y=y-5;
	}
	for(j=1;j<=y;j++)
	{
		printf("%c",q);
	}
}
int ten(int z)
{
	int k;
	char p='l',q='x';
	if(z>=5)
	{
		printf("%c",p);
		z=z-5;
	}
	for(k=1;k<=z;k++)
	{
		printf("%c",q);
	}
}
int one(int g)
{
	int n;
	char p='v',q='i';
	if(g>=5)
	{
		printf("%c",p);
		g=g-5;
	}
	else if(g==4)
	{
		printf("%c%c",q,p);
		g=g-4;
	}
	for(n=1;n<=g;n++)
	{
		printf("%c",q);
	}
}
main()
{
	int yr,a,b,c,d;
	printf("Enter any number=");
	scanf("%d",&yr);
	a=yr/1000;
	yr=yr%1000;
	b=yr/100;
	yr=yr%100;
	c=yr/10;
	yr=yr%10;
	d=yr;
	century(a);
	hundred(b);
	ten(c);
	one(d);
}
