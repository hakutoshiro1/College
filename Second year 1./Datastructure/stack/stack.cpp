#include<bits/stdc++.h>
using namespace std;
class stack_
{
	public:
	int top,size;
	char *arr;
};
stack_ create()
{
	stack_ *st=new stack_;
	cout<<"Enter string size:"<<endl;
	cin>>st->size;
	st->arr=new char [st->size];
	return *st;
}	
int isEmp(stack_ *st)
	{
		if (st->top==-1)
		return 1;
		return 0;
	}
int isFull(stack_ *st)
{
	if (st->top==st->size)
	return 1;
	return 0;
}
void push(stack_ *st,char e)
{
	if(isFull(st)==0)
	{
		st->top++;
		st->arr[st->top]=e;
	}
	else
	cout<<"FULL"<<endl;
}
char pop(stack_ *st)
{
	char x=' ';
	if (isEmp(st)==0)
	{
		x=st->arr[st->top];
		st->top--;
	}
	else
	cout<<"Empty"<<endl;
	return x;
}
void display(stack_ st)
{
	for (int i =st.top; i >=0; i -= 1)
	cout<<st.arr[i]<<" ";
	cout<<endl;
}
int main()
{
	stack_ s;
	s=create();
	string stri,ans;
	cout<<"Enter string:";
	cin>>stri;
	for (int i = 0; i < stri.size(); i++)
	{
		push(&s,stri[i]);
	}
	while (isEmp(&s)==0)
	{
		ans+=pop(&s);
	}
	cout<<ans<<endl;
	/*push(&s,3);
	display(s);
	push(&s,2);
	display(s);
	pop(&s);
	pop(&s);
	pop(&s);
	display(s);*/
	// int i=1;
	// while (i)
	// {
	// 	int n;
	// 	cout<<"1.pop\n2.push\n3.exit\n:"<<endl;
	// 	cin>>n;
	// 	switch(n)
	// 	{
	// 		case 1:cout<<pop(&s)<<endl;
	// 		display(s);
	// 		break;
	// 		case 2:int ele;
	// 		cin>>ele;
	// 		push(&s,ele);
	// 		display(s);
	// 		break;
	// 		default:i=0;
	// 		break;
	// 	}
	// }
	return 0;
}
