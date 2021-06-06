#include<stdio.h>
void main()
{
	int ys,q,sal=0;
	char g;
	printf("Enter year of service:");
	scanf("%d",&ys);987
	printf("Enter gender:");
	scanf( " %c",&g);
	printf("Enter your qualification:");
	scanf("%d",&q);
	if(g=='m'&&ys>=10&&q==0)
	sal=15000;
  else	if(g=='m'&&ys>=10&&q==1)
	sal=10000;
  else	if(g=='m'&&ys<10&&q==0)
	sal=10000;
  else	if(g=='m'&&ys<10&&q==1)
	sal=7000;
  else	if(g=='f'&&ys>=10&&q==0)
	sal=12000;
  else	if(g=='f'&&ys>=10&&q==1)
	sal=9000;
  else	if(g=='f'&&ys<10&&q==0)
	sal=10000;
  else	if(g=='f'&&ys<10&&q==1)
	sal=6000;
	printf("\nSalary of employee=%d",sal);
	getch();
}
