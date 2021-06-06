#include<stdio.h>
#include<math.h>
main()
{
	float v,i,r;
	int n;
	printf("Problem 1: To claculate V,I,R using OHM's LAW.");
	printf("\nPress 1 to calculate V(volt).");
	printf("\nPress 2 to calculate I(ampere).");
	printf("\nPress 3 to calculate R(ohm).\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
				printf("\nEnter value of Resistance(ohm)=");
				scanf("%f",&r);
				printf("\nEnter value of Current(amp)=");
				scanf("%f",&i);
				v=i*r;
				printf("\nVoltage=%f volt",v);	
				break;
			}
		case 2:
			{
				printf("\nEnter value of Resistance(ohm)=");
				scanf("%f",&r);
				printf("\nEnter value of Voltage(volt)=");
				scanf("%f",&v);
				i=v/r;
				printf("\nCurrent=%f amp",i);
				break;		
			}
		case 3:
			{
				printf("\nEnter value of Current(amp)=");
				scanf("%f",&i);
				printf("\nEnter value of Voltage(volt)=");
				scanf("%f",&v);
				r=v/i;
				printf("\nResistance=%f ohm",r);	
				break;
			}	
		default:
			{
				printf("\nEnter a valid value.");
				break;
			}
				
	}
	
}
