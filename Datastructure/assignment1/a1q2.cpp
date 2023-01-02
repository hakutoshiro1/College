#include<bits/stdc++.h>
using namespace std;
#define S string
class book
{
	public:
	S bname,aname;
	int noOfPages;
	void inp(S a,S b,int c)
	{
		bname=a;
		aname=b;
		noOfPages=c;
	}
	void out()
	{
		cout<<"Book name:"<<bname<<endl;
		cout<<"Author\'s name:"<<aname<<endl;
		cout<<"Number of Pages:"<<noOfPages<<endl;
	} 
};
int main()
{
	book b1,*ptr;
	ptr=&b1;
	S a,b;
	int c;
	cout<<"Enter book name:";
		getline(cin>>ws,a);
		cout<<"Enter Author\'s name:";
		getline(cin>>ws,b);
		cout<<"Enter Number of Pages:";
		cin>>c;
		ptr->inp(a,b,c);
		ptr->out();
	return 0;
}
