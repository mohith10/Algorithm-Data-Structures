#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    struct node* next;
};

struct node* Insert_tail(struct node* head,ll value)
{
    struct node* curr=head;
    struct node* new_node=(struct node*)(malloc(sizeof(struct node)));
    if(head==NULL)
    {
        new_node->data=value;
        new_node->next=new_node;
        head=new_node;
    }
    else
    {
        do{
            curr=curr->next;
        }while(curr->next!=head);
        new_node->data=value;
        curr->next=new_node;
        new_node->next=head;
    }
    return head;
}
void display(struct node* head)
{
    struct node* curr=head;
    cout<<"The circular Linked List is:"<<endl;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
    cout<<"\n";
}
struct node* delete_node(struct node* head, ll value)
{
    if(head->data==value)
    {
        head=head->next;
        
    }
    struct node* curr=head;
    do{
        if(curr->next->data==value)
        {
            struct node* del=curr->next;
            curr->next=curr->next->next;
            free(del);
            return head;
        }
        curr=curr->next;
    }while(curr!=head);
}
struct node* Exchange_First_Last(struct node* head)
{
    struct node* curr=head;
    while(curr->next->next!=head)
    {
        curr=curr->next;
    }

    struct node* last=curr->next;
    curr->next=curr->next->next;
    struct node* head_next=head->next;
    curr->next->next=last;
    last->next=head_next;
    head=last;
    return head;
    
}
int main()
{
    struct node* head=NULL;
    head=Insert_tail(head,2);
    head=Insert_tail(head,3);
    head=Insert_tail(head,6);
    head=Insert_tail(head,8);
    display(head);
    head=Exchange_First_Last(head);
    display(head);
}
