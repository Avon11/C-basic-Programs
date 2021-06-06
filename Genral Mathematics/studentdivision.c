#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,per,total;
	printf("Enter marks of Maths:");
	scanf("%d",&s1);
	printf("\nEnter marks of Physics:");
	scanf("%d",&s2);
	printf("\nEnter marks of Chemistry:");
	scanf("%d",&s3);
	printf("\nEnter marks of English:");
	scanf("%d",&s4);
	printf("\nEnter marks of Computer Science:");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	per=(total*100)/500;
if(per>=90)

{
	
		printf("\nA+");
		printf("\nPercentage=%d",per);
}
if(per>=80&&per<90)
{
			printf("\nA");
			printf("\nPercentage=%d",per);
}	
if(per>=70&&per<80)
{
			printf("\nB+");
			printf("\nPercentage=%d",per);
}
if(per>=60&&per<70)
{
			printf("\nB");
			printf("\nPercentage=%d",per);
}
if(per>=50&&per<60)
{
			printf("\nC+");
			printf("\nPercentage=%d",per);
}
if(per>=40&&per<50)
{
			printf("\nC");
			printf("\nPercentage=%d",per);
}
if(per<40)
			
		printf("\nFail");


	getch();
}
