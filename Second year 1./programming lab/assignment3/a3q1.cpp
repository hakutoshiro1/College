#include<bits/stdc++.h>
using namespace std ;
int c=0;
class fruit
{
	public:
	void adder()
	{
		c++;
	}
	int getter()
	{
		return c;
	}
};
class apple: public fruit
{
	public:
	int a=0;
	void adder()
	{
		a++;
		fruit::adder();
	}
	int getter()
	{
		return a;
	}
};
class mango: public fruit
{
	public :
	int m=0;
	void adder()
	{
		m++;
		fruit::adder();
	}
	int getter()
	{
		return m;
	}
};

int main()
{
	int NumOfFruit;
	cin>>NumOfFruit;
	mango m1;
	apple a1;
	fruit f1;
	string fName;
	for(int i=0;i<NumOfFruit;i++)
	{
		cout<<"Enter Fruit Name:";
		cin>>fName;
		if (fName=="Mango"||fName=="mango")
		{
			m1.adder();
		}
		else if(fName=="Apple"||fName=="apple")
		{
			a1.adder();
		}
		else
		{
			f1.adder();
		}
	}	
	cout<<"Number of fruits:"<<f1.getter()<<endl;
	cout<<"Number of mangoes:"<<m1.getter()<<endl;
	cout<<"Number of apples:"<<a1.getter()<<endl;
	return 0;
}
