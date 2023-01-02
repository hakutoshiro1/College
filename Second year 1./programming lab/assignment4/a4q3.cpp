#include<bits/stdc++.h>
using namespace std;
namespace operations
{
	class employee
	{
		public:
		string name;
		int id;
		long long salary;
		void setDetails(string n,int i,long long s)
		{
			name=n;
			id=i;
			salary=s;
		}
		void getDetails()
		{
			cout<<"Employee's Id:"<<id<<"\nName:"<<name<<"\nSalary:"<<salary<<endl;
		}
	};
}
using namespace operations;
int main()
{
	int n;
	cout<<"Enter No. of Employees:";
	cin >>n;
	employee e[n];
	for(int i=0;i<n;i++)
	{
		int id;
		string name;
		long long salary;
		cout<<"Enter Employee's Id:";
		cin>>id;
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter Salary:";
		cin>>salary;
		e[i].setDetails(name,id,salary);
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\n\nEmployee No."<<i+1<<":"<<endl;
		e[i].getDetails();
	}
	return 0;
}
