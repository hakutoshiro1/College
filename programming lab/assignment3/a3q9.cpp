#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class String
{
        string str;
        public:

          void getdata(string a)
        {
        	str=a;
        }

         int operator ==(String s)
        {
               if(str==s.str)
                return 1;

                return 0;
        }
};

int main()
{
        String s1,s2;
		string a,b;
        cout<<"Enter first string :: ";
        cin>>a;
        s1.getdata(a);
        cout<<"\nEnter second string :: ";
        cin>>b;
        s2.getdata(b);
        if(s1==s2)
        {
            cout<<"\nStrings are Equal\n";
        }
        else
        {
            cout<<"\nStrings are Not Equal\n";
        }

        return 0;
}
