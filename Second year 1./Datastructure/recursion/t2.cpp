#include <bits/stdc++.h>
using namespace std;
void tow(int n,char from,char to ,char  aux)
{
    if(n==1) 
    {
        cout<<"move"<<n<<"disk from "<<from<<" to "<<to<<endl;
        return;
    }
    tow(n-1,from,aux,to);
    cout<<"move disk from "<<from<<" to "<<to<<endl;
    tow(n-1,aux,to,from);
    return;
}
int main()
{
    int n;
    cin>>n;
    tow(n,'a','c','b');
    return 0;
}