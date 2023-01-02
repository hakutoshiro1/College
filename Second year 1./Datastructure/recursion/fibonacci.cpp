#include <bits/stdc++.h>
using namespace std;
int fibonacci(int a,int b,int c)
{
    if(!a) return 0;
    if(a<3) return b+c;
    return fibonacci(a-1,c,b+c);
}
int main()
{
    int a;
    cin>>a;
    cout<<fibonacci(a-1,0,1);
    return 0;
}