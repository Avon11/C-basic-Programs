#include<stdio.h>
void main()
{
	int bs,hra,da,salary;
	printf("Enter basic salary :");
	scanf("%d",&bs);
	if(bs<1500)
	{
		hra=bs*0.1;
		da=(bs*90)/100;
		salary=hra+bs+da;
		printf("\nSalary of employ is:%d",salary);
	}
	else
	{
			hra=500;
		da=(bs*98)/100;
		salary=hra+da+bs;
		printf("\nSalary of employ is:%d",salary);
}
	getch();
}
