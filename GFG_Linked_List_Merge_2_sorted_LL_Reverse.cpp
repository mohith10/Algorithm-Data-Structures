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
void MergeList(struct node* t1,struct node* t2)
{
    struct node* head1=head1;
    struct node* head2=head2;
    struct node* head3=NULL;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<=head2->data)
        {
            head3=insert_head(head3,head1->data);
            head1=head1->next;
        }
        else
        {
            head3=insert_head(head3,head2->data);
            head2=head2->next;
            
        }
    }
    while(head1!=NULL)
    {
        head3=insert_head(head3,head1->data);
            head1=head1->next;
    }
    while(head2!=NULL)
    {
        head3=insert_head(head3,head2->data);
            head2=head2->next;
    }
    cout<<"Merged"<<endl;
    display(head3);
}

int main() {
    
    struct node *head=NULL;
    struct node *head2=NULL;
    head2=insert_head(head2,40);
    head2=insert_head(head2,30);
    head2=insert_head(head2,20);
    head2=insert_head(head2,10);
    
    head=insert_head(head,75);
    head=insert_head(head,50);
    head=insert_head(head,30);
    head=insert_head(head,25);
    display(head);
    display(head2);
    // We can either merge simply and then reverse the list But this is the efficient way!
    MergeList(head,head2);
    //display(head);
}
