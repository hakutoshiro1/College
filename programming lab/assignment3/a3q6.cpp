#include<iostream>
#include<cmath>
using namespace std;

class Polar
{
public:
float r;
float a;
Polar(float a=0,float r=0)
{
 this->a=a;
 this->r=r;
 }
Polar operator + (Polar const &obj) {
Polar res;
float x1=r*cos(a),y1=r*sin(a),x2=obj.r*cos(a),y2=obj.r*sin(a);
x1+=x2;
y1+=y2;

if(x1==0)
a=90.00;

else
a=atan(float(y1/x1));
r=sqrt(((x1*x1)+(y1*y1)));
res.a=a;
res.r=r;
return res;
}

void display()
{
 cout<<"The radius is :"<<this->r<<endl;
 cout<<"The angle is :"<<this->a<<endl;
 }
};
int main()
{
 Polar p1(90.00,10),p2(0.00,20);
 Polar p3=p1+p2;
 p3.display();
 return 0;
}
