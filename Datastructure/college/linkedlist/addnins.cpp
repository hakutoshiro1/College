#include <bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node *head,*last;
node *createnode(int element)
{
	node* p=new node;
	p->data=element;
	p->next=NULL;
	return p;
}
void display(node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->next;
	}	
}
node *pushback(int element)
{
	node* p=new node ;
	p->data=element;
	p->next=NULL;
	last->next=p;
	return p;
}

void insertat(node *ala,int index){
	node *pt;
	pt = head;
	for(int i=2;i<index;i++){
	pt = pt->next;
	}
	ala->next = pt->next;
	pt->next = ala;
}



int main()
{
	int n,ele;
	cin>>n;
	node *q;
	cin >>ele;
	head=createnode(ele);
	last=head;
	for(int i=1;i<n;i++)
	{
		int e;
		cin>>e;
		node *q=createnode(e);
		q->next=head;
		
		if (i==1)
		{
			q->next=last;
		}
		head=q;
	}
	
	int cas;
	int element,e2;
	cin>>cas;
	switch (cas)
	{
		case 1:
		{
			cin>>element;
			node* z=createnode(element);
			z->next=head;
			head=z;
		}
		break;
		case 2:
		{
		cin>>e2;
		last=pushback(e2);
		}
		break;
		case 3: int element,position;
		cin >>element>>position;
		insertat(createnode(element),position);
		break;
		/*case 4:int element;
		cin>>element;
		popfrom(element);
		break;
		default:
		cout<<"Have a nice Day Motherf*cker"<<endl;*/
	}
	display(head);
	return 0;
}
