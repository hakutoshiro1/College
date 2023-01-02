#include<bits/stdc++.h>
using namespace std;
void tower(int n,char from,char to ,char aux)
{
	if (n==1)
	{
		cout<<"Move Disk from "<<from<<" to "<<to<<endl;
		return;
	}
	tower(n-1,from,aux,to);
	cout<<"Move Disk from "<<from<<" to "<<to<<endl;
	tower(n-1,aux,to,from); 
}
int main()
{
	int n;
	cin>>n;
	tower(n,'a','c','b');	
	return 0;
}
