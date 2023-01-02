#include<bits/stdc++.h>
using namespace std;
template <class C>void compare(C &a,C &b)
{
	if (a<b)
	{
		cout<<a<<"<"<<b<<endl;
	}
	else if(a==b)
	{
		cout<<a<<"="<<b<<endl;
	}
	else
	{
		cout<<a<<">"<<b<<endl;
	}
}
template <class C,class D>void compare(C &a,D &b)
{
	if (a<b)
	{
		cout<<a<<"<"<<b<<endl;
	}
	else if(a==b)
	{
		cout<<a<<"="<<b<<endl;
	}
	else
	{
		cout<<a<<">"<<b<<endl;
	}
}
int main()
{
	int m=1,n=3,a=9;
	float b=1.1,c=0.3,d=10.1;
	compare(m,n);
	compare(b,c);
	compare(a,d);
	return 0;
}
