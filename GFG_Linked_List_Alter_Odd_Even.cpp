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
void Alter_Odd_Even(struct node* head)
{
    struct node* curr=head;
    struct node *odd=head,*even=head->next;
    ll expect=1;
    while(curr!=NULL)
    {
        if(curr->data%2==0 && expect==1)
        {
            ll temp_data=curr->data;
             curr->data=even->data;
            even->data=temp_data;
            even=even->next->next;
        }
        else if(curr->data%2==1 && expect==0)
        {
            ll temp_data=curr->data;
             curr->data=odd->data;
            odd->data=temp_data;
            odd=odd->next->next;
        }
        else
            {
                curr=curr->next;
                expect=expect^1;
            }
    }
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,80);
    head=insert_head(head,77);
    head=insert_head(head,55);
    head=insert_head(head,40);
    head=insert_head(head,20);
    head=insert_head(head,11);
   // head=insert_head(head,30);
    //head=insert_head(head,20);
    display(head);
    Alter_Odd_Even(head);
    display(head);
    
}
