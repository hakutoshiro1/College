#include<bits/stdc++.h>
using namespace std;
int isprime(int a){
	int count=0;
	for (int i=1;i<a+1;i++){
		if (a%i==0){
			count++;
		}
	}
	if (count==2){
		return 1;
	}
	else{
		return 0;
	}
}
class sprime
{
	public:
	int a;
	void inp(int aa){
		a=aa;
	}
	int out()
	{
		if (isprime(a)==1){
			while (a>0){
				if(isprime(a%10)==0){
					return 0;
				}
				a=a/10;
			}
			return 1;
		}
		else{
			return 0;
		}
	}		
};

int main(){
	int a;
	sprime s1;
	cout<<"Enter the number:";
	cin>>a;
	s1.inp(a);
	if (s1.out()){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
