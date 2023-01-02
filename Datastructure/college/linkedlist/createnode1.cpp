#include <bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node* createnode(int element)
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
int main()
{
	int n,ele;
	cin>>n;
	node *q;
	cin >>ele;
	node* p=createnode(ele);
	for(int i=1;i<n;i++)
	{
		int e;
		cin>>e;
		node *q=createnode(e);
		q->next=p	;
		p=q;
	}
	display(p);
	return 0;
}
