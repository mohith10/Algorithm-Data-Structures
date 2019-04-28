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
void delte_Alternate(struct node* head)
{
    struct node* curr=head;
    while(curr->next->next!=NULL){
        struct node* nextn=curr->next;
        curr->next=curr->next->next;
        free(nextn);
        curr=curr->next;
    }
}

int main() {
    
    struct node *head=NULL;
    head=insert_head(head,100);
    head=insert_head(head,90);
    head=insert_head(head,70);
    head=insert_head(head,60);
    head=insert_head(head,50);
    head=insert_head(head,40);
    head=insert_head(head,30);
    head=insert_head(head,20);
    display(head);
    delte_Alternate(head);
    display(head);
    
}
