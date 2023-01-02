#include<bits/stdc++.h>
using namespace std;
class linkstack
{
	public:
	int data;
	linkstack *next;
};
linkstack *createnode(int e=-101)
{
	linkstack *p=new linkstack;
	p->data=e;
	
	p->next=NULL;
	return p;
}
linkstack *push(linkstack *p,linkstack *q,int e)
{
	if (q!=NULL)
	{
		linkstack *r;
		r=q;
		r=createnode(e);
		
		q=q->next;
		r->next=p;
		p=r;
		cout <<p->data<<endl;
		return p;
	}
	else
	{
		cout<<"FULL"<<endl;
		return p;
	}
}
linkstack* pop(linkstack *p,linkstack *q)
{
	if (p!=NULL)
	{
		linkstack *r;
		r=p;
		p=p->next;
		r->next=q;
		q=r;
		return p;
	}
	else
	{
		cout<<"EMPTY"<<endl;
		return p;
	}
}
void display(linkstack *p)
{
	while (p!=NULL)
	{
		cout<<p->data<<",";
		p=p->next;
	}
	cout<<endl;
}
int main()
{
	int n;
	cin >>n;
	linkstack *avail;
	linkstack *top=new linkstack;
	top=NULL;
	avail=createnode();
	while (--n)
	{
		linkstack *q;
		q=createnode();
		q->next=avail;
		avail=q;
	}
	//display (avail);
	top=push(top,avail,8);
	top=push(top,avail,9);
	display (top);
	int i=1;
/*	while (i)
	{
		int n;
		cout<<"1.pop\n2.push\n3.break\n4.exit\n:"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:pop(top,avail);
			display(top);
			break;
			case 2:int ele;
			cin>>ele;
			push(top,avail,ele);
			display(top);
			break;
			case 3:display(top);
			break;
			default:i=0;
			break;
		}
	}	*/
	return 0;
}
