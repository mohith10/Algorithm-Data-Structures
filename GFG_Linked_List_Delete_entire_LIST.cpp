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
void deleteLL(struct node* head_ref,ll pos)
{
    struct node* temp_head=(head_ref);
    for(ll i=1;i<pos-2;i++)
        temp_head=temp_head->next;
    struct node* temp2=temp_head->next;
    temp_head->next=temp_head->next->next;
    free(temp2);
}
void delete_Key(struct node* head,ll value)
{
    struct node* temp=head;
    while(temp->data!=value)
    {
        temp=temp->next;
    }
    temp->data=temp->next->data;
    temp->next=temp->next->next;
    //Swapping with the next value and deleting the next node
    
}
struct node* delete_list(struct node* head)
{
    struct node* next_node=head;
    struct node* curr=NULL;
    while(next_node!=NULL)
    {
        curr=next_node->next;
        free(next_node);
        next_node=curr;
    }
    head=NULL;
    return head;
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,2);
    head=insert_head(head,3);
    head=insert_head(head,4);
    head=insert_tail(head,1);
    display(head);
    cout<<"After deleting the entire list";
    head=delete_list(head);
    display(head);
    
}
