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
void find_length_Recursive(struct node* head)
{
    static ll length=0;
    if(head==NULL)
    {
        cout<<"Length of Linked List - Recursively is "<<length<<endl;
        return;
    }
    length++;
    find_length_Recursive(head->next);
}
void find_Length_Iter(struct node* head)
{
    ll len=0;
    struct node* temp_head=head;
    while(temp_head!=NULL)
    {
        len++;
        temp_head=temp_head->next;
    }
    cout<<"Length of Linked list-Iteratively is "<<len<<endl;
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,2);
    head=insert_head(head,3);
    head=insert_head(head,4);
    head=insert_tail(head,1);
    display(head);
    find_Length_Iter(head);
    find_length_Recursive(head);
    
}
