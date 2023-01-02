#include<iostream>
using namespace std;
class employee
{
	public:
	string name,address,des;
	int id,salary;
	void inp(int i,string n,string a,string d,int s)
	{
		name=n;
		id=i;
		address=a;
		des=d;
		salary=s;
	}
	void out()
	{
		cout<<"Employee Id:"<<id<<"\nName:"<<name<<"\nAddress:"<<address<<endl;
		cout<<"Designation:"<<des<<"\nSalary:"<<salary<<endl;
	}	
};
int main()
{
	employee e1;
	string name,address,des;
	int id,salary;
	cout<<"Enter Id:";
	cin>>id;
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter your Designation:";
	getline(cin>>ws,des);
	cout<<"Enter your salary:";
	cin>>salary;
	cout<<"Enter address:";
	getline(cin>>ws,address);
	e1.inp(id,name,address,des,salary);
	e1.out();
	return 0;
}

