#include <iostream>
using namespace std;
int main()
{
    	double temp;
    	cout << "Enter Temperature\n";
    	cin >> temp;
    	try
    	{
        		if (temp > 100)
            		throw(temp);
        		else
            		cout << "You can go Outside \n";
    	}
    	catch (const double a)
    	{
        		cout << "Too Hot Outside \n";
    	}
    	int age;
    	cout << "Enter Age:\n";
    	cin >> age;
    	try
    	{
        		if (age < 18)
            	throw age;
        	else
        	{
            	cout << "You can vote\n";
        	}
    	}
    catch (const int a)
    {
        	cout << "Underaged can't vote\n";
    }
    return 0;
}
