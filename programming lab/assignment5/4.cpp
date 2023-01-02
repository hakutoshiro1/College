#include<iostream>
using namespace std;
void add(int i,int j)
{
    	try
    	{
        		if(i==1)
        	{
            	throw i;
        	}
        	else
            	cout<<"Addition result is: "<<i+j<<endl;
    	}
    	catch(int i)
    	{
        		cout<<"Exception caught inside add()"<<endl;
        		throw;
    	}
};
int main()
{
    	try
    	{
        		add(10,5);
        		add(1,49);
    	}
    	catch(int k)
    	{
        		cout<<"Exception caught inside main()"<<endl;
    	}
 return 0;
}
