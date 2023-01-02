#include<iostream>
using namespace std;

class box{
    public:
    static int h;
    int l;
    int b;
    void geth(){
        cout<<"Value of h is "<<this->h<<endl;
    }
    box(int ll,int bb){
        
        l=ll;
        b=bb;
    }
    int area(){
        return (this->l*this->b+this->b*this->h+this->h*this->l)*2;
    }
};

int box::h=5;

int main(){
    
    cout<<"Enter the length and breadth of first box :";
    int l,b;
    cin>>l>>b;
    box a(l,b);
    a.geth();
    cout<<"Area of first box is "<<a.area()<<endl;
    cout<<"Enter the length and breadth of second box :";
    cin>>l>>b;
    box bb(l,b);
    cout<<"Area of second box is "<<bb.area()<<endl;
    bb.geth();
    return 0;

}