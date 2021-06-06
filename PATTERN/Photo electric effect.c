#include<stdio.h>
#include<math.h> 
void thereshold()
{
	double energy,fre,all, h=6.63e-34,e=1.6e-19 ;
	printf("Enter energy(J)=");
	scanf("%lf",&energy);
	fre=energy/h;
	printf("Thereshold frequency=%gHz",fre);
}
void workFunction()
{
	double work,fre,h=6.63e-34;
	printf("\nEnter thereshold frequency=");
	scanf("%lf",&fre);
	work=fre*h;
	printf("Works Function= %gJ",work);
} 
main()
{
	int n;
	printf("1.To calculate Thereshold Frequency.\n");
	printf("2.To calculate Work Function.\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			thereshold();
			break;
		
		case 2:
			workFunction();
			break;
		
		default:
		printf("Wrong Input.");
		break;	
	}
}
