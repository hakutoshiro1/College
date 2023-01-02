#include<bits/stdc++.h>
using namespace std;
namespace Inner
{
	int a;
	void seta(int aa)
	{
		a=aa;
	}
	int geta()
	{
		return a;
	}
}
namespace Outer
{
	int a;
	void seta(int aa)
	{
		a=aa;
	}
	int geta()
	{
		return a;
	}
}
int main()
{
	int a,b;
	cout<<"Enter Number to be enter  in first namespace:";
	cin>>a;
	Inner::seta(a);
	cout<<"Enter Number to be enter  in second namespace:";
	cin>>b;
	Outer::seta(b);
	cout<<"Number in First namespace:"<<Inner::geta()<<"\nNumber in Second namespace:"<<Outer::geta()<<endl;
	return 0;
}
