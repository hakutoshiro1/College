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

int main()
{
	int a;
	string b;
	cout <<"Enter a Number:";
	cin >>a;
	NMS1::seta(a);
	cout<<"Enter a String:";
	cin>>b;
	NMS2::setb(b);
	cout<<"Number:"<<NMS1::geta()<<"\nString:"<<NMS2::getb()<<endl;
	return 0;
}
