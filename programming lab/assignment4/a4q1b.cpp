#include<bits/stdc++.h>
using namespace std;
namespace NMS1
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
namespace NMS2
{
	string b;
	void setb(string bb)
	{
		b=bb;
	}
	string getb()
	{
		return b;
	}
}
using namespace NMS1;
using namespace NMS2;
int main()
{
	int a;
	string b;
	cout <<"Enter a Number:";
	cin >>a;
	seta(a);
	cout<<"Enter a String:";
	cin>>b;
	setb(b);
	cout<<"Number:"<<geta()<<"\nString:"<<getb()<<endl;
	return 0;
}
