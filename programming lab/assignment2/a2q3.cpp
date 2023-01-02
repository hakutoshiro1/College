#include<bits/stdc++.h>
using namespace std;
class area
{
	public:
	float square(float a)
	{
		return a*a;
	}
	float triangle(float h,float b)
	{
		return h*b/2;
	} 
	float circle(float r)
	{
		return 3.14*r*r;
	}
};
int main()
{
	int n;
	cout<<"Enter number that represent the shape of which you want to calculate area:"<<endl;
	cout<<"1.square\n2.triangle\n3.circle"<<endl;
	cin>>n;
	area a;
	switch(n)
	{
		case 1:float length;
		cout<<"Enter length of square:";
		cin>>length;
		cout<<"Area of square:"<<a.square(length)<<endl;
		break;
		case 2:float h,b;
		cout<<"Enter height and base of triangle:";
		cin>>h>>b;
		cout<<"Area of triangle:"<<a.triangle(h,b)<<endl;
		break;
		case 3:float r;
		cout<<"Enter radius of circle:";
		cin>>r;
		cout<<"Area of circle:"<<a.circle(r)<<endl;
		break;
		default:
		cout<<"Invalid Input"<<endl;	
	}
	return 0;
}
