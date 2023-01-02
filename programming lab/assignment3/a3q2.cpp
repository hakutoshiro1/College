#include<bits/stdc++.h>
using namespace std;
class shape
{
	public:
	void display()
	{
		cout<<"This is a Shape"<<endl;
	}
};
class polygon:public shape
{
	public:
	void display()
	{
		cout<<"polygon is shape"<<endl;
		shape::display();
	}
};
class rectangle:public polygon
{
	public:
	void display()
	{
		cout<<"rectangle is polygon"<<endl;
		polygon::display();
	}	
};
class triangle:public polygon
{
	public:
	void display()
	{
		cout<<"triangle is polygon"<<endl;
		polygon::display();
	}
};
class square:public rectangle
{
	public:
	void display()
	{
		cout<<"square is rectangle"<<endl;
		rectangle::display();
	}
};
int main()
{
	string shape_name;
	cin>>shape_name;
	if (shape_name=="square")
	{
		square sq;
		sq.display();
	}
	else if(shape_name=="rectangle")
	{
		rectangle re;
		re.display();
	}
	else if(shape_name=="triangle")
	{
		triangle tr;
		tr.display();
	}
	return 0;	
}
