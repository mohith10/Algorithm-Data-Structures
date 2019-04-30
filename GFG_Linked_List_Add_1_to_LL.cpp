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

ll Add_one(struct node* head)
{
    if(head->next==NULL)
    {
        ll carry=(head->data+1)/10;
        head->data=(head->data+1)%10;
        
        cout<<"head->data "<<head->data<<" carry "<<carry<<endl;
        return carry;
    }
    ll carry=Add_one(head->next);
    if(carry)
       {
           ll carry=(head->data+1)/10;
            head->data=(head->data+1)%10;
            return carry;
       }
    else
    return 0;
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,9);
    head=insert_head(head,9);
    head=insert_head(head,9);
    head=insert_head(head,9);
    //head=insert_head(head,40);
    //head=insert_head(head,20);
    //head=insert_head(head,11);
    display(head);
    ll carry=Add_one(head);
    if(carry)
    head=insert_head(head,1);
    display(head);
    
}
