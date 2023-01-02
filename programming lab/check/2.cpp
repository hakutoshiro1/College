#include<bits/stdc++.h>
using namespace std;
template <class T,class X> class A
{
    public:
    T num;
    X num1;
    A(T n,X n1)
    {
        num=n;
        num1=n1;
    }
    A()
    {}
};
template <class T> T a(T aa,T ab)
{
    return  aa+ab;
}
int main()
{
    A<float,int> ab(10.4,17);
    cout<<ab.num<<" "<<ab.num1<<endl;
    cout<<a(10.5 ,15.0)<<endl;
}