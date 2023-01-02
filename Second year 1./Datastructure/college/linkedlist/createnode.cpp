#include <bits/stdc++.h>
using namespace std;
class nodes
{
	public:
	int data;
	nodes *next;
	
	
};
void display(nodes *p)
{
	while (p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}

nodes *createnode(int ele){
         nodes* p = new nodes;
         p->data = ele;
         p->next = NULL;
         return p;
}




int main()
{
	 //nodes* p;
     
     cout<<"ENTER NUMBER OF NODES"<<endl;
     int n,e;
     cin>>n;
     cin>>e;
     nodes* p = createnode(e);
     for(int i=1;i<n;i++){
           int el;
           cin>>el;
           nodes *e = createnode(el);
           e->next = p;
           p = e;
           
     }
     display(p);
	/*nodes *ptr,*hptr;
	int n;
	cout<<"enter no of nodes:";
	cin>>n;
	cin>>ptr->data;
	hptr=ptr;
	ptr=new nodes;
	ptr=ptr->next;
	//cout<<ptr->next;
	for  (int i=1;i<n;i++)
	{
		ptr=new nodes;
		cin>>ptr->data;
		ptr=ptr->next;
		
	}	
	display(hptr);*/
	return 0;
}
