#include <bits/stdc++.h>
using namespace std;
class swaper
{
	public:
	int a,b;
	void inp(int aa,int ab)
	{
		a=aa;
		b=ab;
	}
	void s()
	{
		cout<<"Before interchange:"<<endl;
		cout<<"a="<<a<<"\nb="<<b<<endl;
		a=a+b;
		b=a-b;
		a=a-b;
		cout<<"After interchange:"<<endl;
		cout<<"a="<<a<<"\nb="<<b<<endl;
	}	
};
int main()
{
	int a,b;
	cin>>a>>b;
	swaper s1;
	s1.inp(a,b);
	s1.s();
	return 0;
}
