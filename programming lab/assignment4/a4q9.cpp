#include<bits/stdc++.h>
using namespace std;
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
	int a;
	float b;
	cout<<"Enter Integer:";
	cin>>a;
	cout<<"Enter Float value:";
	cin>>b;
	compare(a,b);
	return 0;
}
