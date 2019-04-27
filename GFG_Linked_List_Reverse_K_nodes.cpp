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
struct node* reverseK(struct node* head, ll k)
{
    struct node* curr=head;
    struct node* nextn=NULL;
    struct node* prev=NULL;
    
    ll count=0;
    while(curr!=NULL && count<k)
    {
        nextn=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextn;
        count++;
        
    }
    if(nextn!=NULL)
        head->next=reverseK(nextn,k);
    
    return prev;
    
    
}

int main() {
    
    struct node *head=NULL;
    head=insert_head(head,100);
    head=insert_head(head,90);
    head=insert_head(head,70);
    head=insert_head(head,60);
    head=insert_head(head,50);
    head=insert_head(head,40);
    head=insert_head(head,30);
    head=insert_head(head,20);
    display(head);
    head=reverseK(head,3);
    display(head);
    
}
