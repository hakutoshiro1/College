#include<bits/stdc++.h>
using namespace std;
class sta
{
	public:
	int size,top;
	int *arr;
};
void create(sta *st)
{
	cin>>st->size;
	st->top=-1;
	st->arr=new int [st->size];
}	
int isEmp(sta *st)
	{
		if (st->top==-1)
		{
			return 1;
		}
		return 0;
	}
	int isFull(sta *st)
	{
		if (st->top==st->size-1)
		{
			return 1;
		}
		return 0;
	}
	void push(sta *st,int e)
	{
		if(isFull(st)==0)
		{
			st->top++;
			st->arr[st->top]=e;
		}
		else
		{
			cout<<"FULL"<<endl;
		}
	}
	int pop(sta *st)
	{
		int x=-1;
		if (isEmp(st)==0)
		{
			x=st->arr[st->top];
			st->top--;
		}
		else
		{
			cout<<"Empty"<<endl;
		}
		return x;
	}
	void display(sta st)
	{
		for (int i =st.top; i >=0; i -= 1)
		{
			cout<<st.arr[i]<<" ";
		}
		cout<<endl;
	}
int main()
{
	sta s;
	create(&s);
	/*push(&s,3);
	display(s);
	push(&s,2);
	display(s);
	pop(&s);
	pop(&s);
	pop(&s);
	display(s);*/
	int i=1;
	while (i)
	{
		int n;
		cout<<"1.pop\n2.push\n3.exit\n:"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:cout<<pop(&s)<<endl;
			display(s);
			break;
			case 2:int ele;
			cin>>ele;
			push(&s,ele);
			display(s);
			break;
			default:i=0;
			break;
		}
	}
	return 0;
}
