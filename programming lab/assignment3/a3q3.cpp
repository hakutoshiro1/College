#include<bits/stdc++.h>
using namespace std;
class staff
{
	public:
	int code;
	string name;
	staff()
	{}
	staff(int cod,string nam)
	{
		code=cod;
		name=nam;
	}
};
class education
{
	public:
	string q_g_e,h_p_q;
	education(string a,string b)
	{
		q_g_e=a;
		h_p_q=b;
	}
	void display()
	{
		cout<<"Highest Qualification in General Education:"<<q_g_e<<endl;
		cout<<"Highest Professional Qualification:"<<h_p_q<<endl;
	}
};
class teacher:public staff,public education
{
	public:
	string subject,publication;
	teacher(int cod,string nam,string subjec,string publicatio,string a,string b)
	:staff(cod,nam),education(a,b)
	{
		subject=subjec;
		publication =publicatio;
	}
	void display()
	{
		cout<<"\n\nEmployee code:-"<<code<<endl;
		cout<<"Employee name:-"<<name<<endl;
		cout<<"Employee's job:-Teacher"<<endl;
		cout<<"Employee's subject:-"<<subject<<endl;
		cout<<"Publication:-"<<publication<<endl;
		education::display();
	}
};
class officer:public staff,public education
{
	public:
	string grade;
	officer(int cod,string nam,string grad,string a,string b)
	:staff(cod,nam),education(a,b)
	{
		grade=grad;
	}
	void display()
	{
		cout<<"\n\nEmployee code:-"<<code<<endl;
		cout<<"Employee name:-"<<name<<endl;
		cout<<"Employee's job:-Officer"<<endl;
		cout<<"Grade:-"<<grade<<endl;
		education::display();
	}
};
class typist:public staff
{
	public:
	int speed;
	typist(int cod,string nam,int spee):staff(cod,nam)
	{
		speed=spee;
	}
};
class regular:public typist
{
	public:
	regular(int cod,string nam,int spee):typist(cod,nam,spee)
	{}
	void display()
	{
		cout<<"\n\nEmployee code:-"<<code<<endl;
		cout<<"Employee name:-"<<name<<endl;
		cout<<"Employee's job:-Typist"<<endl;
		cout<<"Typist's type:-Regular"<<endl;
		cout<<"Speed:-"<<speed<<" words/minute"<<endl;
	}
};
class casual:public typist
{
	public:
	int dailywages;
	casual(int cod,string nam,int spee,int dailywage):typist(cod,nam,spee)
	{
		dailywages=dailywage;
	}
		void display()
	{
		cout<<"\n\nEmployee code:-"<<code<<endl;
		cout<<"Employee name:-"<<name<<endl;
		cout<<"Employee's job:-Typist"<<endl;
		cout<<"Typist's type:-Casual"<<endl;
		cout<<"Employee's Dailywages:-"<<dailywages<<endl;
		cout<<"Speed:-"<<speed<<" words/minute"<<endl;
	}
};
int main()
{
	int noOfEmp,code;
	string name;
	cout<<"Enter number of Employees:";
	cin>>noOfEmp;
	for (int i = 0; i < noOfEmp; i += 1)
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter code:";
		cin>>code;
		cout<<"Enter job name:"<<endl;
		string job;
		cin>>job;
		if (job=="teacher")
		{
			string subject,publication,a,b;
			cout<<"Enter subject name:";
			cin>>subject;
			cout<<"Enter publication:";
			cin>>publication;
			cout<<"Enter Highest Qualification in General Education:";
			cin>>a;
			cout<<"Enter Highest Professional Qualification:";
			cin>>b;
			teacher t(code,name,subject,publication,a,b);
			t.display();
		}
		else if(job=="officer")
		{
			string grade,a,b;
			cout<<"Enter Grade:";
			cin>>grade;
			cout<<"Enter Highest Qualification in General Education:";
			cin>>a;
			cout<<"Enter Highest Professional Qualification:";
			cin>>b;
			officer o(code,name,grade,a,b);
			o.display();
		}
		else if(job=="typist")
		{
			string type;
			cout<<"Enter type of Typist:";
			cin>>type;
			int speed;
			cout<<"Enter speed:";
			cin>>speed;
			if (type=="regular")
			{
				regular r(code,name,speed);
				r.display();
			}
			else if(type=="casual")
			{
				int dailywages;
				cout<<"Enter Dailywages:";
				cin>>dailywages;
				casual c(code,name,speed,dailywages);
				c.display();
			}
		}
	}
	return 0;
}
