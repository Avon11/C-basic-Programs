#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter 1 for force:";
	cout<<"\nEnter 2 for Velocity:";
	cout<<"\nEnter 3 for Distance:";
	cin>>n;
	switch(n)
	{
		case 1:
			float f,m,a;
			cout<<"\nEnter M and A\n";
			cin>>m>>a;
			f=m*a;
			cout<<"\nForce is :"<<f;
			break;
		case 2:
			float v,u,t;
			cout<<"\nEnter U,A and T\n";
			cin>>u>>a>>t;
			v=u+(a*t);
			cout<<"Velocity is:"<<v;
			break;
		case 3:
			float s;
			cout<<"\nEnter U,T,A\n";
			cin>>u>>t>>a;
			s=(u*t)+((0.5)*(a*t*t));
			cout<<"Distance is:"<<s;
			break;
		default:
			cout<<"enter correct choise.";
			break;
	}
}

