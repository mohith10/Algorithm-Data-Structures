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
    if(head==NULL)
    {
        head=new_node;
        return head;
    }
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
struct node* Add_Numbers_LL(struct node* t1,struct node* t2)
{
    struct node *head1=t1, *head2=t2;
    ll carry=0;
    struct node* head3=NULL;
    while(head1!=NULL && head2!=NULL)
    {
        head3=insert_tail(head3,((head1->data+head2->data+carry)%10));
        carry=(head1->data+head2->data+carry)/10;
        //cout<<"Carry "<<carry<<endl;
        head1=head1->next;
        head2=head2->next;
    }
    while(head1!=NULL)
    {
        //cout<<"head1"<<head1->data<<" carr"<<carry<<endl;
        head3=insert_tail(head3,(head1->data+carry)%10);
        carry=(head1->data+carry)/10;
        head1=head1->next;
        
    }
    while(head2!=NULL)
    {
        head3=insert_tail(head3,((head2->data)+carry)%10);
        carry=(head2->data+carry)/10;
        head2=head2->next;
    }
    return head3;
    
}
int main() {
    
    struct node *head=NULL;
    struct node *head2=NULL;
    head=insert_head(head,6);
    head=insert_head(head,4);
    head=insert_head(head,9);   
    head=insert_head(head,5);
    head=insert_head(head,7);

    //head2=insert_head(head2,2);
    head2=insert_head(head2,4);
    head2=insert_head(head2,8);
    //head2=insert_head(head2,20);
    display(head);
    display(head2);
    struct node* head3=Add_Numbers_LL(head,head2);
    display(head3);
    
}
