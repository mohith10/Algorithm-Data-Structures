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
int kMinValue(struct node* root,int &k,int &res)
{
    if(root==NULL)
    return 0;
    kMinValue(root->left,k,res);
    k--;
    //cout<<"ON "<<root->data<<endl;
    if(k==0)
    {
        res=root->data;
    }
    kMinValue(root->right,k,res);
        
    
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
    int k,res;
    cin>>k;
    kMinValue(root,k,res);
    cout<<"\n"<<" Minimum value is "<<res;
}
