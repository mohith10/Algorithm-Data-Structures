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
ll displayN(struct node* head, ll N)
{
    struct node* temp=head;
    for(ll i=1;i<N;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}
ll display_from_last(struct node* head,ll n)
{
    struct node* temp=head;
    struct node* temp2=head;
    ll i=0;
    while(temp!=NULL)
    {
        i++;
        if(i>n)
            {
                temp=temp->next;
                temp2=temp2->next;
            }
        
        else
            temp=temp->next;
    }
    return temp2->data;
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,2);
    //cout<<"Value inserted "<<head->data<<endl;
    head=insert_head(head,3);
    head=insert_head(head,4);
    head=insert_tail(head,1);
    display(head);
    cout<<"Node at N th position from end is "<<display_from_last(head,2);
    
}
