#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next,*front=NULL,*rear=NULL;
    

    void enque(int x){
        if(rear==NULL && front==NULL){
            rear=new node();
            front =rear;
            rear->data=x;
        }else{
            rear->next=new node();
            rear=rear->next;
            rear->data=x;
            rear->next=NULL;
        }
        cout<<"Element enqued"<<endl;
    }

    void deque(){
        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return ;
        }
        front=front->next;
        cout<<"Element dequed"<<endl;
    }

    void peek(){
        if(front==NULL){
            cout<<"queue is empty"<<endl;
            return ;
        }
        cout<<"Front element is : "<<front->data<<endl;
        return ;
    }

    void peekr(){
        if(rear==NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<"Rear element is : "<<rear->data<<endl;
    }
    void disp(){
        node *pt=front;
        while(pt!=NULL){
            cout<<pt->data<<" ";
            pt=pt->next;
        }
    }
};

int main(){
    node que;
    b:
    cout<<"Enter the number a/c to option :"<<endl;
    cout<<"1.Enque"<<endl;
    cout<<"2.Deque"<<endl;
    cout<<"3.Peek front"<<endl;
    cout<<"4.Peek rear"<<endl;
    int a;
    cin>>a;
    switch(a){
        case 1 :
        cout<<"enter number to insert :";
        int k;
        cin>>k;
        que.enque(k);
        break;

        case 2 :
        que.deque();
        break;

        case 3 :
        que.peek();
        break;

        case 4 :
        que.peekr();
        break;

        default :
        cout<<"Wrong input"<<endl;
        break;
    }
    goto b;
    

    return 0;
}