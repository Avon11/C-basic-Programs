#include<stdio.h>
main()
{
	int min1,hr1,sec1,min2,hr2,sec2,n=0;
	printf("Enter hour:\n");
	scanf("%d",&hr1);
	printf("Enter minutes:\n");
	scanf("%d",&min1);
	printf("Enter second:\n");
	scanf("%d",&sec1);
	hr2=12-hr1;
	min2=60-min1;
	sec2=60-sec1;
	if(hr1==11&&min1>0&&min1!=60&&sec1>0&&sec1!=60)
	{
		hr2=hr1+1;
		printf("Hour mirror image %d\nMinute mirror image %d\nSecond mirror image %d\n",hr2,min2,sec2);
		n=n+1;
	}
	if(hr1==12&&min1>0&&min1!=60&&sec1>0&&sec1!=60)
	{
		hr2=hr1-1;
		printf("Hour mirror image %d\nMinute mirror image %d\nSecond mirror image %d\n",hr2,min2,sec2);
		n=n+1;
	}
	if(sec2==60&&min2==60)
	{
	
		sec2=0;
		min2=0;
		printf("Hour mirror image %d\nMinute mirror image %d\nSecond mirror image %d\n",hr2,min2,sec2);
		n=n+1;
    }
	else if (n==0)
	printf("Hour mirror image %d\nMinute mirror image %d\nSecond mirror image %d\n",hr2,min2,sec2);

}
