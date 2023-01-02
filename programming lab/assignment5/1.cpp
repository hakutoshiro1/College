#include <iostream>
using namespace std;
int main()
{
	int x = -1;
	try 
	{
		if (x < 0)
		{
			cout <<"Throw An Exception"<<endl;
			throw x;	
		}
	}
	catch (int x ) 
	{
		cout << "Exception Was Caught"<<endl;
	}
	return 0;
}
