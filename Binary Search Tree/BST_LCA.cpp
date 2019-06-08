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
struct node* LCA(struct node* root,int a,int b)
{
    if(root==NULL)
        return root;
    int val=root->data;
    
    if(val<a && val <b)
    {
        return LCA(root->right,a,b);
    }
    else if(val>a && val>b)
    {
        return LCA(root->left,a,b);
    }
    
    return root;
    
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
    
    struct node* res=LCA(root,60,80);
    if(res!=NULL)
        cout<<"LCA is "<<res->data;
    else
        cout<<"LCA does'nt exist!";
}
