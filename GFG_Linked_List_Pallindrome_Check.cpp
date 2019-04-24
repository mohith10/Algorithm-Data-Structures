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

bool Pallindrome(struct node** head2)
{
    struct node* head3=*head2;
    stack<ll> s;
    while(head3!=NULL)
    {
        s.push(head3->data);
        head3=head3->next;
    }
    head3=*head2;
    while(head3!=NULL)
    {
        if(head3->data!=s.top())
            return false;
        //cout<<head3->data<<" ";
        s.pop();
        head3=head3->next;
    }
    return true;
}

int main() {
    
    struct node *head=NULL;
    head=insert_head(head,2);
    //cout<<"Value inserted "<<head->data<<endl;
    head=insert_head(head,3);
    head=insert_head(head,4);
    head=insert_tail(head,3);
    head=insert_tail(head,4);
    display(head);
    if(Pallindrome(&head))
        cout<<"LL is pallindrome!";
    else
        cout<<"LL is not pallindrome!";
}
