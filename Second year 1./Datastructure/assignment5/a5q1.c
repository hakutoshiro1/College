#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size,top1,top2,*arr;
};

struct stack* createnode(){
    struct stack *obj=(struct stack*)malloc(sizeof(struct stack));
    printf("Size of complete stack: ");
    scanf("%d",&obj->size);
    obj->top1=-1;
    obj->top2=obj->size;
    obj->arr=(int*)malloc(sizeof(int)*obj->size);
    return obj;
}
void pop1(struct stack *p){
    if(p->top1==-1){
        printf("stack underflow\n");
    }else{
        p->arr[p->top1]=0;
        --p->top1;
        printf("poped\n");
    }
}
void pop2(struct stack *p){
    if(p->top2==p->size){
        printf("stack underflow\n");
    }else{
        p->arr[p->top2]=0;
        ++p->top2;
        printf("poped\n");
    }
}
void push1(struct stack *p,int a){
    if(p->top1==p->top2-1){
        printf("stack overflow\n");
    }else{
        ++p->top1;
        p->arr[p->top1]=a;
        printf("Pushed\n");
    }
}
void push2(struct stack *p,int a){
    if(p->top1==p->top2-1){
        printf("stack overflow\n");
    }else{
        --p->top2;
        p->arr[p->top2]=a;
        printf("Pushed\n");
    }
}
void peek(struct stack *p){
    printf("top1 = %d; value = %d\ntop2 = %d; value = %d\n",p->top1,p->arr[p->top1],p->top2,p->arr[p->top2]);
}

int main(){
    struct stack *p=createnode();
    int x,num;
    lable:
    printf("Enter the number to perform operation :\n");
    printf("1. Push element in stack\n");
    printf("2. Pop element from even stack\n");
    printf("3. Pop element from odd stack\n");
    printf("4. Peek in even stack and odd stack\n");
    printf("0. Exit\n");
    scanf("%d",&x);
    switch(x){
        case 1: 
        printf("Enter the element to push : ");
        
        scanf("%d",&num);
        if(num%2==0){
            push1(p,num);
        }else{
            push2(p,num);
        }
        break;
        case 2:
        pop1(p);
        break;
        case 3:
        pop2(p);
        break;
        case 4:
        peek(p);
        break;
        case 0:
        return 0;
        default:
        printf("enter again\n");
    }
    goto lable;

    return 0;

}
