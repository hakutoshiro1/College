#include <bits/stdc++.h>
using namespace std ;
class A
{
public:
    int a;
    A(int x)
    {
        a=x;
    }
    A(const A& ab)
    {
        this->a=ab.a;
    }
};
int main()
{
    A ac(15);
    A b= ac;
    ac.a=10;
    cout<<b.a<<" "<<ac.a<<endl;
    return 0;
}