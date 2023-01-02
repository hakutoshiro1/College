#include <bits/stdc++.h>
using namespace std;
 class INTEGER
 {
    float a;
  public:
    INTEGER(float a)
    {
      this->a=a;
    }

    float operator+(INTEGER I)
    {
      return(a+I.a);
    }

    float operator-(INTEGER I)
    {
      return(a-I.a);
    }

    float operator*(INTEGER I)
    {
      return(a*I.a);
    }

    float operator/(INTEGER I)
    {
      return(a/I.a);
    }
 };


int main()
{
  INTEGER I1(10.10),I2(20.50);

  cout<<"\nOperator + : \n"<<I1+I2;
  cout<<"\nOperator + : \n"<<I1-I2;
  cout<<"\nOperator + : \n"<<I1*I2;
  cout<<"\nOperator + : \n"<<I1/I2;
  return 0;


}
