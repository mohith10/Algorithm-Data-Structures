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

struct node* Inorder_Successor(struct node *root, struct node *find)
{
    if(find->right!=NULL)
    {
        cout<<"Else"<<endl;
        struct node* curr=find->right;
        while(curr->left!=NULL)
            curr=curr->left;
        return curr;
    }
    else
    {
        
        struct node* succ=NULL;
        while(root)
        {
            if(root->data>find->data)
            {
                succ=root;
                root=root->left;
            }
            else if(root->data<find->data)
            {
                root=root->right;
            }
            else return succ;
            
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
    struct node* temp=insert(root, 60); 
    insert(root, 80); 
    cout<<"The tree is (Preorder): "<<endl;
    preorder(root);
    cout<<endl;

    
    struct node* res=Inorder_Successor(root,temp);
    cout<<"Inorder successor is : "<<res->data;
    
}
