#include <bits/stdc++.h>
using namespace std ;
class cal
{
	public:
		float a,b,c,d,x;
		void inp(float aa[3])
		{
			a=aa[0];
			b=aa[1];
			c=aa[2];
		}
		float s()
		{
			d=a+b;
			x=a*b-c/d;
			return x;
		}
};
int main()
{
	cout<<"Enter a,b and c:"<<endl;
	float a[3];
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	float ans;
	cal c1;
	c1.inp(a);
	ans=c1.s();
	cout<<ans<<endl;
}
