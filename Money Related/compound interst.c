#include<stdio.h>
#include<math.h>
main()
{
	float i,amt,x,all,fix,p,r,n,q;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the Principal:");
		scanf("%f",&p);
		printf("\nEnter Rate:");
		scanf("%f",&r);
		printf("\nEnter no. of years:");
		scanf("%f",&n);
		printf("\nEnter compound intrest per year:");
		scanf("%f",&q);
		fix=1+(r/q);
		x=n*q;
		all=pow(fix,x);
		amt=p*all;
		printf("\nAmount you have to pay:%fRs",amt);
	}
}
