#include<stdio.h>
struct node
{
	int value;
	struct node *next;
}*head;
struct node *createnode(int val)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->value=val;
	p->next=NULL;
	return p;
}
void rev(){
    struct node *p=head,*q=NULL,*r=NULL;
    while(p!=NULL){
       r=q;
       q=p;
       p=p->next;
       q->next=r;
    }
    head=q;
}
void insert(int n,int position){
    struct node *f=head,*tmp;
    int count=0;
    while(f!=NULL){
        if(count==position-2){
            tmp=f->next;
            f->next=(struct node*)malloc(sizeof(struct node));
            f=f->next;
            f->value=n;
            f->next=tmp;
            break;
        }
        count++;
        f=f->next;
    }
}
void delete(int n){
    struct node *f=head,*tmp=head,*prev=NULL;
    while(f!=NULL){
        if(n==f->value){
            prev->next=f->next;
            break;
        }
        prev=f;
        f=f->next;
    }
}
void display(struct node *p)
{
	while(p)
	{
		printf("%d ",p->value);
		p=p->next;
	}
	printf("\n");
}
void main()
{
	int n,val;
	
	scanf("%d",&n);
	printf("1.");
	scanf("%d",&val);
	head=createnode(val);
	n--;
	for(int i=0;i<n;i++)
	{
		struct node *q;
		printf("%d.",i+2);
		scanf("%d",&val);
		q=createnode(val);
		q->next=head;
		head=q;
	}
	display(head);
	insert(5,2);
	display(head);
	rev();
	display(head);
	delete(5);
	display(head);
}
