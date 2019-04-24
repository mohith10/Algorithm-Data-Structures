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
void remove_duplicate(struct node* head)
{
    map<ll,ll> m;
    struct node* temp=head;
    struct node* temp2=NULL;
    struct node* prev=NULL;
    while(temp->next!=NULL)
    {
       if(m[temp->data]==0)
        {
            prev=temp;
            m[temp->data]++;
            temp=temp->next;
        }
       else
        {
            temp2=temp;
            temp=temp->next;
            prev->next=temp;
            free(temp2);
        }
    }
}
int main() {
    
    struct node *head=NULL;
    head=insert_head(head,2);
    //cout<<"Value inserted "<<head->data<<endl;
    head=insert_head(head,4);
    head=insert_head(head,3);
    head=insert_tail(head,3);
    head=insert_tail(head,0);
    display(head);
    remove_duplicate(head);
    display(head);
}
