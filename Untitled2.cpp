#include<iostream>
using namespace std;
int sum(int x,int y)
{
	int sum;
	sum=x+y;
	return (sum);
}
main()
{
	int a,b,c;
	cout<<"Enter any two numbers:";
	cin>>a>>b;
	c=sum(a,b);
	cout<<"sum is :"<<c;
}
