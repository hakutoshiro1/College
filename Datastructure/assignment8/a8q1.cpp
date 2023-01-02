#include <bits/stdc++.h>
using namespace std;
class tree
{
    public:
    int data;
    tree *left,*right;
};
tree *allocmem(int val)
{
    tree *p=new tree;
    p->data=val;
    p->left=NULL;
    p->right=NULL;
    return p;
}
// void attachment(tree *p,tree *s)
// {
//     tree *q;
//     while (p)
//     {
//         q=p;
//         if(p->data>s->data)
//         p=p->left;
//         else
//         p=p->right;
//     }
//     if(q->data>s->data)
//     q->left=s;
//     else
//     q->right=s;
// }
tree *attachment(tree *p,int item)
{
    if(!p)
    {
        p=allocmem(item);
        return p;
    }
    if (item<p->data) 
    {
        if(!p->left) 
        {
            tree *s;
            s=attachment(p->left,item);
            p->left=s;
        }
        else
        attachment(p->left,item);
    }
    else 
    {
        if(!p->right)
        {
            tree *s;
            s=attachment(p->right,item);
            p->right=s;
        }
        else 
        attachment(p->right,item);
    }
    return p;
}
void inorder(tree *p)
{
    if(!p)
    return ;
    inorder(p->left);
    cout<<p->data<<endl;
    inorder(p->right);
    return ;
}
void preorder(tree *p)
{
    if(!p)
    return;
    cout<<p->data<<endl;
    preorder(p->left);
    preorder(p->right);
    return ;
}
void postorder(tree *p)
{
    if(!p)
    return ;
    postorder(p->left);
    postorder(p->right);
    cout<<p->data<<endl;
    return ;
}
int main()
{
    int i=1,j=1;
    tree *root ,*p;
    while (i)
    {
        cout<<"1.Add a Element to Tree.\n2.Inorder Traversal.\n3.Preorder Traversal.\n4.Postorder Traversal.\n5.Exit.\nEnter Number representing your operation:";
        cin>>i;
        switch(i)
        {
            case 1: int e;
                    cout<<"Enter Element:";
                    cin>>e;
                    p=allocmem(e);
                    if(j)
                    {
                        root=p;
                        j--;
                    }
                    else
                    attachment(root,p->data);
                    break;
            case 2: inorder(root);
                    break;
            case 3: preorder(root);
                    break;
            case 4: postorder(root);
                    break;
            default:i=0;
                    break;
        }
    }
    
    return 0;
}