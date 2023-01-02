#include <iostream>
using namespace std;
static int o_c;
class sportsteam{
private:
    string name;
    int n_p;
    int a;
public:
    void set_d()
    {
        string a1;
        cout << "ENTER YOUR NAME: " << endl;
        cin >> a1;
        int a2, a3;
        cout << "ENTER YOUR NUMBER OF PLAYERS" << endl;
        cin >> a3;
        cout << "ENTER YOUR AVERAGE AGE" << endl;
        cin >> a2;

        n_p = a3;
        name = a1;
        a = a2;
        o_c++;
    }
    void get_d()
    {
        cout << "YOUR TEAM NAME: " <<name<< endl;
        cout << "NUMBER OF PLAYERS IN THIS TEAM IS: " << n_p<< endl;
        cout << "YOUR TEAMS AVERAGE AGE IS: " << a<< endl;
    }
};

int main()
{
    int n;
    cout<<"Enter no of teams:";
    cin>>n;
    sportsteam s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].set_d();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].get_d();
    }

    cout<<"The Number of teams:"<<o_c<<endl;
    
    return 0;
}
