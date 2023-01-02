#include<bits/stdc++.h>
#include<string>
using namespace std;


class change
{
	public:
	int a;
	string inp,ans;
	void input(int aa)
	{
		a=aa;
		cout<<"Enter your Input:";
		cin>>inp;
	}
	
	string binToHex(string a)
	{
		string b,ans;
		int d=4-a.size()%4;
		while(d%4!=0)
		{
			b+="0";
			d--;
		}
		b+=a;
		for (int i=0;i<a.size();i+=4)
		{
		
			string c;
			c+=b[i];
			c+=b[i+1];
			c+=b[i+2];
			c+=b[i+3];
			 	if(c== "0000") ans+="0";
				else if(c=="0001") ans+="1";
				else if(c=="0010") ans+="2";
				else if(c=="0011") ans+="3";
				else if(c=="0100") ans+="4";
				else if(c=="0101") ans+="5";
				else if(c=="0110") ans+="6";
				else if(c=="0111") ans+="7";
				else if(c=="1000") ans+="8";
				else if(c=="1001") ans+="9";
				else if(c=="1010") ans+="A";
				else if(c=="1011") ans+="B";
				else if(c=="1100") ans+="C";
				else if(c=="1101") ans+="D";
				else if(c=="1110") ans+="E";
				else if(c=="1111") ans+="F";
				else ans=" Invalid input";
		}	
		return ans;
	}
string binToOct(string a)
{
	string b,ans;
	int d=3-a.size()%3;
		while(d%3!=0){
			b+="0";
			d--;
		}
		b+=a;
	for (int i=0;i<a.size();i+=3){
			string c;
			c+=b[i];
			c+=b[i+1];
			c+=b[i+2];
			 	if (c=="000") ans+="0";
				else if(c=="001") ans+="1";
				else if(c=="010") ans+="2";
				else if(c=="011") ans+="3";
				else if(c=="100") ans+="4";
				else if(c=="101") ans+="5";
				else if(c=="110") ans+="6";
				else if(c=="111") ans+="7";
				else ans=" Invalid input";
		}	
	return ans;	
}

string hexToBin(string a){
	for (int i=0;i<a.size();i++){
			switch(a[i]){	
				case '0':ans+="0000";
						break;
			 	case '1':ans+="0001";
						break;
				case '2':ans+="0010";
						break;
				case '3':ans+="0011";
						break;
				case '4':ans+="0100";
						break;
				case '5':ans+="0101";
						break;
				case '6':ans+="0110";
						break;
				case '7':ans+="0111";
						break;
				case '8':ans+="1000";
						break;
			 	case '9':ans+="1001";
						break;
				case 'A':ans+="1010";
						break;
				case 'B':ans+="1011";
						break;
				case 'C':ans+="1100";
						break;
				case 'D':ans+="1101";
						break;
				case 'E':ans+="1110";
						break;
				case 'F':ans+="1111";
						break;	
				default:ans=" Invalid input";
						break;
			}
	}
	return ans;
}
string octToBin(string a)
{
	for (int i=0;i<a.size();i++)
		{
			
			switch(a[i])
			{	
				case '0':ans+="000";
						break;
			 	case '1':ans+="001";
						break;
				case '2':ans+="010";
						break;
				case '3':ans+="011";
						break;
				case '4':ans+="100";
						break;
				case '5':ans+="101";
						break;
				case '6':ans+="110";
						break;
				case '7':ans+="111";
						break;
					
				default:ans=" Invalid input";
						break;
			}
		
	}
	return ans;
}
string chooseFun()
	{
		switch(a)
		{
			case 1:ans=binToHex(inp);
				return ans ;
			case 2:ans=binToOct(inp);
			       return ans ;
			case 3:ans=hexToBin(inp);
			       return ans;
			case 4:ans=hexToBin(inp);
				ans=binToOct(ans);
				return ans;
			case 5:ans=octToBin(inp);
		
				return ans; 
			case 6:ans=octToBin(inp);
				ans=binToHex(ans);
				return ans;
		}
		return 0;
	}
	
	
};
int main()
{
	int a;
	string ans;
	cout<<"Enter the number that represent the format you want to change:"<<endl;
	cout<<"1.Binary to Hexadecimal."<<"\n2.Binary to Octal."<<"\n3.Hexadecimal to Binary."<<"\n4.Hexadecimal to Octal."<<"\n5.Octal to Binary."<<"\n6.Octal to Hexadecimal"<<endl;
	cin >>a;
	change c1;
	c1.input(a);
	ans=c1.chooseFun();
	cout<<ans<<endl;
	return 0;
}
