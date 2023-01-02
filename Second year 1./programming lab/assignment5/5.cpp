#include <iostream>
using namespace std;
double a, b;
void accept()
{
    cout << "Enter any two Numbers\n";
    try
    {
        	cin >> a;
        	if (cin.fail())
            	throw(a);
        	cin >> b;
        	if (cin.fail())
            	throw(b);
    }
    catch (...)
    {
       	 cout << "Incompatible Datatype for value\n";
        	exit(0);
    }
}
void calculate()
{
    	try
    	{
	        	if (b == 0)
            	throw b;
        		cout << a / b;
    	}
    	catch (double y)
    	{
        		cout << "Divide By Zero";
    	}
}
int main()
{
    	accept();
    	calculate();
    	return 0;
}
