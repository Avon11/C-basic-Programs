#include<stdio.h>
void main()
{
	int i,j;
	char a,b;
	printf("Enter any alphabet capital or small:");
	scanf("%c",&a);
	if(a>=65&&a<=91)
	{
			b=a+32;
			printf("OPPOSITE OF LETTER IS:%c",b);
	}
	if(a>=97&&a<=123)
	{
			b=a-32;
			printf("OPPOSITE OF LETTER IS:%c",b);
	}

}

