#include <iostream>
#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *left,*right;
};

node* insert(struct node* root,int value)
{
   
    if(root==NULL)
    {
        struct node* point=(struct node*)(malloc(sizeof(struct node)));
        point->data=value;
        point->left=NULL;
        point->right=NULL;
        root=point;
        return root;
    }
    if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else
    {
        root->right=insert(root->right,value);
    }
    return root;
}
void preorder(struct node* root)
{
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
int pair_sum(struct node *root,int sum)
{
    if(root==NULL)
        return -1;
    stack<struct node*> s1,s2;
    int res=0;
    struct node *lefty=root,*righty=root,*top1=NULL,*top2=NULL;
    while(1){
        while(lefty!=NULL)
        {
            s1.push(lefty);
            lefty=lefty->left;
        }
        while(righty!=NULL)
        {
            s2.push(righty);
            righty=righty->right;
        }
        
        if(s1.empty() || s2.empty())
           return res;
        top1=s1.top();
        top2=s2.top();
        if(top1->data+top2->data==sum)
        {
            res++;
            s1.pop();
            s2.pop();
            lefty=top1->right;
            righty=top2->left;
            
        }
        else if(top1->data+top2->data<sum)
        {
            s1.top();
            lefty=top1->right;
        }
        else
        {
            s2.pop();
            righty=top2->left;
        }
    }
}
int main() {
	struct node *root=NULL;
	root=insert(root,50);
	insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
    cout<<"The tree is (Preorder): "<<endl;
    preorder(root);
    cout<<endl;
    
    cout<<pair_sum(root,70)/2;
    
}
