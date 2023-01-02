#include <iostream>
#include <iomanip>
#define pi 3.1416
using namespace std;
class shape
{
	public:
	double x, y;
	public:
	void get_data(double a, double b)
	{
		x = a;
		y = b;
	}
	double get_x() { return x; }
	double get_y() { return y; }
	virtual void display_area() {}
};
class triangle : public shape
{
	public:
	void display_area()
	{
		double a;
		a = (x * y) / 2;
		cout << " Area of triangle = " << a << endl;
	}
};
class rectangle : public shape
{
	public:
	void display_area()
	{
		double a;
		a = x * y;
		cout << " Area of rectangle = " << a << endl;
	}
};
class circle : public shape
{
	public:
	void display_area()
	{
		double a;
		a = pi * x * x;
		cout << " Area of circle = " << a << endl;
	}
};
int main(){
	shape *s[3];
	triangle t;
	s[0] = &t;
	rectangle r;
	s[1] = &r;
	circle c;
	s[2] = &c;
	double x, y;
	cout << " Enter the value of x & y for triangle: ";
	cin >> x >> y;
	s[0]->get_data(x, y);
	cout << " Enter the value of x & y for rectangle: ";
	cin >> x >> y;
	s[1]->get_data(x, y);
	cout << " Enter the radius of circle : ";
	double rd;
	cin >> rd;
	s[2]->get_data(rd, 0);
	cout << endl<< endl;
	s[0]->display_area();
	s[1]->display_area();
	s[2]->display_area();
	return 0;
}
