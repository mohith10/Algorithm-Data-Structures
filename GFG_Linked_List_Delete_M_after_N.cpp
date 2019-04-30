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
void delete_m_n(struct node* head,ll m, ll n)
{
    struct node* temp=head;
    ll tempm=m,tempn=n;
    while(temp!=NULL)
    {
        for(ll i=0;i<m-1 && temp!=NULL;i++)
            temp=temp->next;
        if(temp==NULL)
             break;
        struct node* temp2=temp;
        //cout<<"temp"<<temp->data<<endl;
        for(ll i=0;i<=n && temp2!=NULL ;i++)
            temp2=temp2->next;
            
        if(temp2==NULL)
           {
               temp->next=NULL;
           }
          
        else temp->next=temp2;
        temp=temp->next;
        // cout<<"temp2"<<temp2->data<<endl;
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
    delete_m_n(head,3,2);
    display(head);
    
}
