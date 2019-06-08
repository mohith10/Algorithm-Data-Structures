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
int Iterative_inorder(struct node* root,int k)
{
    if(root==NULL)
        return INT_MAX;
   // cout<<root->data;
    //return;
    struct node *curr=root,*pre;
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
            if(k-1==0)
            return curr->data;
            k--;
            curr=curr->right;
        }
        else
        {
            pre=curr->left;
            while(pre->right!=NULL && pre->right!=curr)
                pre=pre->right;
            
            if(pre->right==curr)
            {
                pre->right==NULL;
                if(k-1==0)
                return curr->data;
                k--;
                curr=curr->right;
            }
            else{
                pre->right=curr;
                curr=curr->left;
            }
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
    
    cout<<Iterative_inorder(root,4);
}
