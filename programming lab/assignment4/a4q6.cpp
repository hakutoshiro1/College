#include<bits/stdc++.h>
using namespace std;
template <class t> t mul(t a)
{
	return a*a;
}
template<class t> t mul(t a,t b)
{
	return a*b;
} 
int main()
{
	int a=11,b=12,c=14;
	float d=1.1,e=1.2,f=1.4;
	cout<<mul(a)<<"\n"<<mul(b,c)<<endl;
	cout<<mul(d)<<"\n"<<mul(e,f)<<endl;
	return 0;
}
