#include<iostream>
#include<string>

using namespace std;

class String{
    public:
    string s;

    String(){
        s="//uninitialised//";
    }
    String(string a){
        s=a;
    }
    String(string a,string b){
        s=a+b;
    }

    void display(){
        cout<<"string is : "<<this->s<<endl;
    }
};

int main(){
    String a;
    String b("Hello!!");
    String c("Good","Morning");

    cout<<"For a ";
    a.display();
    cout<<"For b ";
    b.display();
    cout<<"For c ";
    c.display();
    return 0;
}