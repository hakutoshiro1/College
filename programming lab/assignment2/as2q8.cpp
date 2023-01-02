#include<iostream>
using namespace std;
class result{
    public:
    int roll;
    int internal;
    int midsem;
    int endsem;
    int final;
    
    result(int r,int i, int m,int e,int f){
        roll=r;
        internal=i;
        midsem=m;
        endsem=e;
        final=f;

    }

    result(int r,int f){
        roll=r;
        final=f;
    }
};

int main(){
    int r=12,i=19,m=30,e=50,f=99;
    result a(r,i,m,e,f);
    int r2=23,f2=89;
    result b(r2,f2);

    cout<<"\n-->Result of student a : \n";
    cout<<"Roll : "<<a.roll<<endl;
    cout<<"Internal exam marks : "<<a.internal<<endl;
    cout<<"Midsem exam marks   : "<<a.endsem<<endl;
    cout<<"Endsem exam marks   : "<<a.endsem<<endl;
    cout<<"Total marks         : "<<a.final<<endl<<endl;

    cout<<"-->Result of student b : "<<endl;
    cout<<"Roll : "<<b.roll<<endl;
    cout<<"Total marks         : "<<b.final<<endl;

    return 0;
    
    
}