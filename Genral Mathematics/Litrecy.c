#include<stdio.h>
void main()
{
	float mp,wp,mi,wi,ti;
	mp=(80000*52)/100;
	wp=80000-mp;
	printf("\nTotal men population is:%f",mp);
	printf("\nTotal women population is:%f",wp);
	mi=(mp*17)/100;
	wi=(wp*29)/100;
	ti=mi+wi;
	printf("\nTotal illetracy:%f",ti);
	getch();
}
