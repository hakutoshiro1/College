#include<bits/stdc++.h>
using namespace std;
template <class t>t search(t a[5],t b)
{
	for (int i = 0; i < 5; i += 1)
	{
		if (a[i]==b)
		{
			return i+1;
		}
	}
	return -1;
}
int main()
{
	int a[]={1,2,3,4,5};
	float b[]={1.1,2.2,3.3,4.4,5.5};
	cout<<search(a,4)<<"\n"<<endl;
	cout<<search(a,8)<<"\n"<<endl;
	cout<<search(b,(float)3.3)<<"\n"<<endl;
	cout<<search(b,(float)8.1)<<"\n"<<endl;
	return 0;
}
