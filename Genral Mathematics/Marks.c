#include<stdio.h>
void main()
{
	float s1,s2,s3,s4,s5,ag,p;
	printf("Enterthe marks in subject s1,s2,s3,s4,s5:\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	printf("\ntotalagregates marks are:%f",ag);
	p=(s1+s2+s3+s4+s5)*1/5;
	printf("\npercentage:%f",p);
	getch();
}
