#include<iostream>
#include<stdlib.h>
void insert(int);
using namespace std;

struct  node
{
    int data;
    struct node *next;
    
};


int main()
{
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    return 0;
}

struct node *head=NULL;
void insert(int val)
{
    cout<<"enter a value:";
    cin>>val;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
    cout<<endl<<"value has inserted at the head";

}