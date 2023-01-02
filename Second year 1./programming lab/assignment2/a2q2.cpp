#include<bits/stdc++.h>
using namespace std;
class customer{
	private:
	int cid,age;
	string name,city;
	public:
	void set_values(int c,int a,string n,string cityName){
		cid=c;
		age=a;
		name=n;
		city=cityName;
	}
	int get_cid(){
		return cid;
	}
	int get_age(){
		return age;
	}
	string get_name(){
		return name;
	}
	string get_city(){
		return city;
	}
};
int main(){
	int n;
	cout<<"Enter Number of Customers:";
	cin>>n;
	customer c[n];
	int cid,age;
	string name,city;
	for (int i=0;i<n;i++){
		cout<<"Customer Number:"<<i+1<<endl;
		cout<<"Enter Customer Id:";
		cin>>cid;
		cout<<"Enter Customer Name:";
		cin>>name;
		cout<<"Enter Customer's age:";
		cin>>age;
		cout<<"Enter Customer's City Name:";
		cin>>city;
		c[i].set_values(cid,age,name,city);
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"Customer Number:"<<i+1<<endl;
		cout<<"Customer Id:"<<c[i].get_cid()<<endl;
		cout<<"Customer Name:"<<c[i].get_name()<<endl;
		cout<<"Customer's age:"<<c[i].get_age()<<endl;
		cout<<"Customer's city name:"<<c[i].get_city()<<endl;
	}
	return 0;
}
