#include<bits/stdc++.h>
using namespace std;
class election
{
	public:
	string name;
	int votes=0;
	election(string n/*,int v=0*/)
	{
		name=n;
		//votes=v;
	}
	void vot()
	{
		votes++;
	}
	election()
	{
	}
};
int main()
{
	int noOfCan,noOfVoters,vote,max=0,k,c=0;
	cin>>noOfCan>>noOfVoters;
	election E1[noOfCan];
	for(int i=0;i<noOfCan;i++)
	{
		string name;
		cout<<"Enter Name:";
		cin>>E1[i].name;
		//election E1[i]=election(name);
	}
	
	for (int i=0;i<noOfVoters;i++)
	{
		cout<<"\n\n";
		for (int j=0;j<noOfCan;j++)
		{
			cout<<j+1<<"."<<E1[j].name<<endl;
		}
		cout<<"Enter your vote number:"<<endl;
		cin>>vote;
		E1[vote-1].vot();
	}
	cout<<"\n\n";
	for (int i=0;i<noOfCan;i++)
	{
		cout<<i+1<<"."<<E1[i].name<<":"<<E1[i].votes<<endl;
		if (max<E1[i].votes)
			{
				max=E1[i].votes;
				c=0;
				k=i;
			}
		else if(max==E1[i].votes)
		{
			c++;
		}
		
	}
	if (c==0)
	{
		cout<<"Winner:"<<E1[k].name<<endl;
	}
	else
	{
		cout<<"Draw"<<endl;
	}
	return 0;
}
