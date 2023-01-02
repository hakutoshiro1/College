#include<iostream>
using namespace std;

class power{
    public:
    int n;
    double m;

    power(int mm){
        m=mm;
        n=2;
    }
    power(int mm,int nn){
        m=mm;
        n=nn;
    }
};

int main(){
    cout<<"Enter the value of m and n : ";
    int m,n;
    cin>>m>>n;
    power a(m,n);
    for(int i=2;i<=a.n;i++){
        m=m*a.m;
    }
    cout<<"Value of m^n is "<<m<<endl;

    cout<<"Enter the value of m only : ";
    cin>>m;
    power b(m);
    for(int i=2;i<=b.n;i++){
        m=m*b.m;

    }
    cout<<"Valur of m^2 is "<<m<<endl;
    return 0;
}