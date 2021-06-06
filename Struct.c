#include<stdio.h>
main()
{
	struct dob
	{
		char *mon[25];
		int date;
		int year;
	}d;
	struct student
	{
		char *name[25];
		int id;
		struct dob d;
	}s1;
	printf("\nEnter Student name:");
	scanf("%s",s1.name);
	printf("\nEnter ID:");
	scanf("%d",&s1.id);
	printf("\nEnter Date :");
	scanf("%d",&s1.d.date);
	printf("\nEnter Month:");
	scanf("%s",s1.d.mon);
	printf("\nEnter Year:");
	scanf("%d",&s1.d.year);
	printf("%s\t%d",s1.name,s1.id);
	printf("\t %d:%s:%d \t",s1.d.date,s1.d.mon,s1.d.year);
}
