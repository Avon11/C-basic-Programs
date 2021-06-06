#include<stdio.h>
void main()
{
	char a;
	int b;
	printf("Enter a character:");
	scanf( " %c",&a);
	b=a;
	if(a>=97&&a<=122)
	{
		printf("It is a small alphabet");
	}
	if(a>=65&&a<=90)
	{
		printf("It is a Capital letter");
	}
	else	
	printf("It is a special character");
    
	getch();
}
