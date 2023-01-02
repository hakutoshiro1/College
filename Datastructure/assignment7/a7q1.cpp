#include <bits/stdc++.h>
using namespace std;
class queu
{
    public:
    int front ,size,rear,*arr;
};
queu *memalloc()
{
    queu *p= new queu;
    cout<<"Enter size:";
    cin>>p->size;
    p->front=-1;
    p->rear=-1;
    p->arr=new int [p->size]; 
}
void enqueue(queu *p,int element)
{
    if ((p->front==0 &&p->rear==p->size-1)||(p->rear+1==p->front))
    cout<<"Overflow."<<endl;
    else if (p->rear==p->size-1)
    {
        p->rear=0;
        p->arr[p->rear]=element;
    }
    else
    {
        p->rear++;
        if(p->front==-1)
        p->front=0;
        p->arr[p->rear]=element;
    }
}
int dequeue(queu *p)
{
    int x=INT_MIN;
    if (p->front==-1 &&p->rear==-1)
    cout<<"Underflow."<<endl;
    else if (p->front==p->rear)
    {
        x=p->arr[p->front];
        p->front=-1;
        p->rear=-1;
    }
    else
    {
        x=p->arr[p->front];
        p->front++;
    }
    return x;
}
void display(queu *p)
{
    for(int i=p->front;i!=p->rear+1;i++)
    {
        if (i==p->size)
        {
            i=0;
        }
        cout<<p->arr[i]<<endl;
    }
    if (p->front==p->rear+1)
    {
        for (int i =p->front; i < p->size; i++)
        {
            cout<<p->arr[i]<<endl;
        }
        for (int i = 0; i < p->front; i++)
        {
            cout<<p->arr[i]<<endl;
        }
    }
}
int main()
{
    queu *p=memalloc();
    int i=1;
    while(i)
    {
        cout<<"Enter Value of Operation That is to be performed:"<<endl;
        cout<<"1.Enqueue\n2.Dequeue\n3.display\n4.Exit\nEnter Operation value:";
        cin>>i;
        switch (i)
        {
        case 1:
            int e;
            cout<<"Enter Element to Enqueue:";
            cin>>e;
            enqueue(p,e);
            break;
        case 2:
            e=dequeue(p);
            if(e!=INT_MIN)
            cout<<"Popped Element:"<<e<<endl;
            break;
        case 3:
            display(p);
            break;
        default:
            i=0;
            break;
        }
    }
}