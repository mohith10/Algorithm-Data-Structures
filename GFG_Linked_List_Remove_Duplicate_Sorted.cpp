#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node{
    ll data;
    struct node *next;
};

struct node* insert_head(struct node* head, ll value)
{
    struct node* new_node=(struct node*)(malloc(sizeof(struct node)));
    new_node->data=value;
    new_node->next=head;
    head=new_node;
    return head;
    
}
struct node* insert_tail(struct node* head,ll value)
{
    struct node* new_node=(struct node*)(malloc(sizeof(struct node)));
    new_node->data=value;
    new_node->next=NULL;
    struct node* temp_point=head;
    while(temp_point->next!=NULL)
        temp_point=temp_point->next;
    temp_point->next=new_node;
    return head;
    
}
void display(struct node* head)
{
    struct node* temp_head=head;
    cout<<"Linked List is "<<endl;
    while(temp_head!=NULL)
    {
        cout<<temp_head->data<<" ";
        temp_head=temp_head->next;
    }
    cout<<endl;
}

struct node* Remove_Duplicate_Sorted(struct node* head)
{
    struct node* curr=head;
    struct node* next_node =NULL;
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            next_node=curr->next;
            while(next_node!=NULL && next_node->data==curr->data)
            {
                next_node=next_node->next;
            }
            if(next_node==NULL)
                {
                    curr->next=NULL;
                   break;
                }
            else curr->next=next_node;
            
        }
        curr=curr->next;
    }
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,80);
    head=insert_head(head,80);
    head=insert_head(head,55);
    head=insert_head(head,55);
    head=insert_head(head,55);
    head=insert_head(head,55);
    head=insert_head(head,55);
    display(head);
    Remove_Duplicate_Sorted(head);
    display(head);
    
}
