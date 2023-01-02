#include<bits/stdc++.h>
using namespace std;
template <class t>void comp(t &a,t &b)
{
	t c=a;
	a=b;
	b=c;
}
int main()
{
	int a=1,b=2;
	float m=1.1,n=1.2;
	cout<<"Before:"<<a<<" "<<b<<endl;
	cout<<"Before:"<<m<<" "<<n<<endl;
	swap(a,b);
	swap(m,n);
	cout<<"After:"<<a<<" "<<b<<endl;
	cout<<"After:"<<m<<" "<<n<<endl;
	return 0;
}
