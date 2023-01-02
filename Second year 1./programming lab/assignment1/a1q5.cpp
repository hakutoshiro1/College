#include <bits/stdc++.h>
#define r a[i]
using namespace std;
class str
{
	public:
	string a;
	int v=0,c=0,s=0;
	void inp(string aa)
	{
		a=aa;
	}
	void calculate()
	{
		for (int i=0;i<a.size();i++)
		{
			if((r>='a' && r<='z')||(r>='A' && r<='Z'))
			{
				if (r=='a'||r=='A'||r=='e'||r=='E'||r=='i'||r=='I'||r=='o'||r=='O'||r=='u'||r=='U')
					{
						v++;
					}
			}
			else if(r==' ')
			{
			s++;
			}
			else
			{
				c--;
			}
		}
		
		c+=a.size()-v-s;
	}
	void out()
	{
		cout<<"Vowels:"<<v<<endl;
		cout<<"Consonents:"<<c<<endl;
	}
};
int main()
{
	string a;
	getline (cin>>ws,a);
	str s1;
	s1.inp(a);
	s1.calculate();
	s1.out();
	return 0;
}
