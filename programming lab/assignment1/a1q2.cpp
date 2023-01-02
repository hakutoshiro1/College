#include <bits/stdc++.h>
using namespace std;
class rankr
{
	public:
	int a[5],n;
	void inp(int aa[5])
	{
		for (int i=0;i<5;i++)
		{
			a[i]=aa[i];
		}
		n=sizeof(a)/sizeof(a[0]);
		sort(a,a+n);
	}
	
	void dis()
	{
		cout<<"Largest number:"<<a[4]<<"\nSecond Largest number:"<<a[3]<<endl;
		cout<<"Smallest number:"<<a[0]<<"\nSecond Smallest number:"<<a[1];
		cout<<"\nMiddle number:"<<a[2]<<endl;
	}
};
int main()
{
	int a[5];
	cout<<"Enter 5 Numbers:";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	rankr r1;
	r1.inp(a);
	r1.dis();
	return 0;
}
