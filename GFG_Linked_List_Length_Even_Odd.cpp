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

ll Length_Even_Odd(struct node* head)
{
    struct node* curr=head;
    ll count=0;
    while(curr!=NULL)
    {
        count++;
        curr=curr->next;
    }
    return (count%2);
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,80);
    head=insert_head(head,8);
    head=insert_head(head,5);
    head=insert_head(head,555);
    head=insert_head(head,53);
    head=insert_head(head,525);
    head=insert_head(head,515);
    display(head);
    if(!Length_Even_Odd(head))
        cout<<"even";
    else   cout<<"odd";
    display(head);
    
}
