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

struct node* pairwise_swap_links(struct node* head)
{
    struct node *curr=head,*prev=NULL;;
    while(curr!=NULL && curr->next!=NULL)
    {
        struct node *next_next=curr->next->next,*nextn=curr->next;
        nextn->next=curr;
        if(curr==head)
            head=nextn;
        else
            prev->next=nextn;
        curr->next=next_next;
        prev=curr;
        curr=curr->next;
        
    }
    return head;
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,80);
    head=insert_head(head,77);
    head=insert_head(head,55);
    head=insert_head(head,40);
    head=insert_head(head,40);
    head=insert_head(head,20);
    head=insert_head(head,11);
    display(head);
    head=pairwise_swap_links(head);
    display(head);
    
}
