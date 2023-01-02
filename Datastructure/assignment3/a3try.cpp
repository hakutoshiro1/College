#include <bits/stdc++.h>
using namespace std;
class llist
{
    public:
    llist * next;
    int data;
};
llist *createNode(int e)
{
    llist *p=new llist();
    p->next =NULL;
    p->data=e;
    return p;
}
llist* attach(llist *head,llist *p)
{
    if(!head)
    {
        head=p;
        return head;
    }
    llist *q=head;
    while(q->next) q=q->next;
    q->next=p;
    return head;
}
void display(llist *p)
{
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    return;
}
void insert(llist *p,int n,int e)
{
    while(--n&&p)p=p->next;
    llist *r=createNode(e);
    r->next=p->next;
    p->next=r;
}
llist * delet(llist *p,int tar)
{
    llist *q=p;
    if(q->data==tar) return q->next;
    while(q->next&&q->next->data!=tar) q=q->next;
    cout<<"\n"<<q->next->data<<endl;
    
    if (q->next)
    q->next=q->next->next;
    return p;
}
llist *reve(llist *q)
{
    llist* p=NULL,*r;
    if(q)r=q->next;
    while(q)
    {
        q->next=p;
        p=q;
        q=r;
        if(r) r=r->next;
    }    
    return p;
}
int main()
{
   int n;
   cin>>n;
   llist *head;
   int e;
   cin>>e;
   head=createNode(e);
   while(--n)
   {
        cin>>e;
        llist *p;
        p=createNode(e);
        head = attach(head,p);
   } 
   display(head);
   insert(head,2,3);
   cout<<endl;
   cout<<endl;
   display(head);
   delet(head,4);
   cout<<endl;
   cout<<endl;
   display(head);
   head =reve(head);
   cout<<endl;
   cout<<endl;
   display(head);
}