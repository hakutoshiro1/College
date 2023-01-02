#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
};
struct node *createnode(int val)
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	p->prev=NULL;
	p->data=val;
	p->next=NULL;
	return p;
}
struct node *head,*last;
void display(struct node* p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void displayr(struct node* p)
{
	printf("Reverse Display:");
	while(p)
	{
		printf("%d ",p->data);
		p=p->prev;
	}
	printf("\n");
}
void reve()
{
	struct node* p,*q;
	p=head;
	q=p;
	last=p;
	while(q!=NULL)
	{
		q=p->next;
		p->next=p->prev;
		p->prev=q;
		if(q)
		{
			p=q;
		}
	}
	head=p;
	printf("After Reversing:");
	display(head);
}
void deletenode(struct node* p,int val)
{
	struct node *q,*r;
	while(p->data!=val &&p->next!=NULL)
	{
		p=p->next;
	}
	if (p==head && p!=last)
	{
		head=p->next;
		head->prev=NULL;
	}
	else if (p==head && p==last)
	{
		head=NULL;
	}
	else if(p==last &&p->data==val)
	{
		last=p->prev;
		last->next=NULL;
	}
	else if(p!=NULL&&p->data==val)
	{
		q=p->prev;
		r=p->next;
		q->next=r;
		r->prev=q;
	}
	printf("After Deletion:");
	display(head);
}
void ins(struct node *p,int val,int position)
{
	struct node *q;
	q=createnode(val);
	if (position>1)
	{
		position-=2; 
		while(position--&&p->next!=NULL)
		{
			p=p->next;
		}
			q->next=p->next;
			q->prev=p;
			p->next=q;
			p=q->next;
			if(p)
			p->prev=q;
	}
	else if(position==1)
	{
		q->next=p;
		p->prev=q;
		head=q;
	}
	if (p==NULL && position>0)
	{
		printf("Invalid Position.Hence Inserted at last.\n");
	}
	printf("After Insertion:");
	display(head);	
}
void main()
{
	int n,ele,d,que,pos;
	bool a=true;
	printf("Enter No of Elements:");
	scanf("%d",&n);
	struct node *p,*q;
	if (n!=0)
	{
		printf("Enter Elements:");
		scanf("%d",&ele);
		
		p=createnode(ele);
		head=p;
		n--;
	}
	while(n--)
	{
		scanf("%d",&ele);
		q=createnode(ele);
		p->next=q;
		q->prev=p;
		p=q;
		last=q;
	}
	
	
	while(a)
	{
		printf("\n\n1.Display\n2.Reverse Display\n3.Delete\n4.Reverse\n5.Insert\n6.Exit\nEnter Number:");
		scanf("%d",&que);
		switch(que)
		{
			case 1: display(head);
					break;
			case 2:displayr(last);
					break;
			case 3: printf("Enter Element:");
					scanf("%d",&d);
			        deletenode(head,d);
			        break;
			case 4:reve();
					break;
			case 5:printf("Enter Element:");
				   scanf("%d",&ele);
				   printf("Enter Position:");
				   scanf("%d",&pos);
					ins(head,ele,pos);
					break;
			default : a=false;
					break;
		}
	}
}
