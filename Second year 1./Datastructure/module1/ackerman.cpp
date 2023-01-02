#include<bits/stdc++.h>
using namespace std;
int func(int m,int n)
{
	int sum=0;
	if (m==0)
	{
		return n+1;
	}
	else if(n==0)
	{
		return func(m-1,1);
	}
	else
	{
		return func(m-1,func(m,n-1));
	}
}
int main()
{
	int m,n ;
	cin>>m>>n;
	cout<<func(m,n);
	return 0;
}
