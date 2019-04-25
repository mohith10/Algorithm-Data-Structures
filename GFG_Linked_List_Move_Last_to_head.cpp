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
struct node* find(struct node* head,ll x)
{
    struct node* temp=head;
    if(temp->data==x)
        return temp;
    while(temp!=NULL)
    {
        if(temp->next->data==x)
            return temp;
        temp=temp->next;
    }
    return NULL;
}
struct node* move_last_first(struct node* head)
{
    struct node* temp=head;
    while(temp->next->next!=NULL )
    {
       temp=temp->next;
    }
    struct node* temp_head=head;
    struct node* last=temp->next;
    //Changing nodes
    temp->next=NULL;
    last->next=head;
    head=last;
    return head;
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,50);
    head=insert_head(head,20);
    head=insert_head(head,10);
    head=insert_tail(head,90);
    head=insert_tail(head,80);
    head=insert_tail(head,30);
    head=insert_tail(head,60);
    head=insert_tail(head,100);
    display(head);
    head=move_last_first(head);
    display(head);
}
