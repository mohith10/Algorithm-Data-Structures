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
ll countLoop(struct node* slow, struct node* fast)
{
    ll res=1;
    while(slow->next!=fast)
    {
        res++;
        slow=slow->next;
    }
    return res;
}

ll Loop_Detect(struct node* head)
{
    struct node* slow=head;
    struct node* fast=head;
    while(slow && fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return countLoop(slow,fast);
        }
        
    }
    return 0;
}


int main() {
    
    struct node *head=NULL;
    head=insert_head(head,2);
    //cout<<"Value inserted "<<head->data<<endl;
    head=insert_head(head,3);
    head=insert_head(head,4);
    head=insert_tail(head,1);
    head=insert_tail(head,4);
    display(head);
    cout<<"Loop detected with length "<<Loop_Detect(head);
}
