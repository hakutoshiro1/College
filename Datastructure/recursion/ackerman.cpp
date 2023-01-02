#include<bits/stdc++.h>
using namespace std;
int acke(int m,int n)
{
    if (!m) return n+1;
    if (m&& !n) return acke(m-1,1);
    if(m&& n) return acke(m-1,acke(m,n-1));
    return n+1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<acke(a,b);
}