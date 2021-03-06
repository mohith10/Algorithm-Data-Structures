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
    if(head==NULL)
    {
        head=new_node;
        return head;
    }
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

struct node* rotate(struct node* head,ll k)
{
    struct node* curr=head;
    struct node* head_prev=head;
    ll count=1;
    while(head!=NULL)
    {
        if(count<k)
            curr=curr->next;
        else if(count==k)
        {
            struct node* nextn=curr;
            curr=curr->next;
            nextn->next=NULL;
        }
        else if(count==k+1)
        {
            head=curr;
            curr=curr->next;
        }
        if(curr->next==NULL && count>k)
            {
                curr->next=head_prev;
                return head;
            }
        count++;
    }
    
    
}
int main() {
    
    struct node *head=NULL;
    struct node *head2=NULL;
    head=insert_head(head,6);
    head=insert_head(head,4);
    head=insert_head(head,9);   
    head=insert_head(head,5);
    head=insert_head(head,7);
    display(head);
    head=rotate(head,3);
    display(head);
    
}
