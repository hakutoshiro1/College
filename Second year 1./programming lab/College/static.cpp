#include<bits/stdc++.h>
using namespace std;
class abc
{
	public:
	static int a;
	abc()
	{
		cout<<"hello"<<endl;
	};
	~abc()
	{
		cout<<"D"<<endl;
	}
	static void en()
	{
		cout<<++a<<endl;
	}
};
int abc::a=0;
int main()
{
	int c=0;
	if (c==0)
	{
		abc a1;
		a1.en();
	}
	cout<<"bye";
	
	return 0;
}
