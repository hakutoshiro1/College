#include<iostream>
using namespace std;
int main() 
{   
	cout << "Testing multiple catches"<<endl;
   	int x;
   	cin>>x;
   	try 
   	{
       	if (x > 0)
           	throw x;
       	else
           	throw 'x';
   	} 
   	catch (int x)
   	{
       	cout << "Integer Caught "<<endl;
   	} 
 	catch (char x)
   	{
  	     cout << "Character is Caught " <<endl;
    }
    
} 
