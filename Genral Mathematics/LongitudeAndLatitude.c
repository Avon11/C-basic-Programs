#include<stdio.h>
#include<math.h>
void main()
{
	float log1,log2,lat1,lat2,theta,distance,pag,innm;
	printf("Enter Longitude 1 and Latitude 1:");
	scanf("%f%f",&log1,&lat1);
	printf("\nEnter Longitude 2 and Latitude2:");
	scanf("%f%f",&log2,&lat2);
	theta=log2-log1;
	pag=(sin(lat1)*sin(lat2))+(cos(lat1)*cos(lat2)*cos(theta));
	distance=acos(pag);
	innm=3963*distance;
	printf("\nDistance between two point in nutric miles is:%f",innm);
	getch();
}
