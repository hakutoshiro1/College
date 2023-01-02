#include<bits/stdc++.h>
using namespace std;
class film
{
	public:
	string name,language,type;
	int duration;
	film()
	{
		language="Hindi";
		duration=3;
	}
	void inp(string a,string b)
	{
		name=a;
		type=b;
	}
	void out()
	{
		cout<<"Film name:"<<name<<endl;
		cout<<"Type of Film:"<<type<<endl;
		cout<<"Duration:"<<duration<<endl;
		cout<<"Language:"<<language<<endl;
	}
	~film()
	{
		cout<<"Destructed Data"<<endl;
	}
};
int main()
{
	film f1;
	string name,type;
	cout<<"Enter Movie Name:";
	cin >>name;
	cout<<"Enter Type of Movie:";
	cin >>type;
	f1.inp(name,type);
	f1.out();
	return 0;
}
