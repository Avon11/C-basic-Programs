#include<stdio.h>
main()
{
	int num,*ptr,i;
	printf("How many ints would ypu like store");
	scanf("%d",&num);
	ptr=(int *)malloc(num*sizeof(int));
	for(i=0;i<num;i++)
	{
		*(ptr+i)=i;
	}
	for(i=0;i<num;i++)
	{
		printf("%d ",*(ptr+i));
	}
}
