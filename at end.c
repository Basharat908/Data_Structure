#include<stdio.h>
#include<stdlib.h>

//insertion of node at the end of linked list

struct node* insert(struct node *head,int d);
struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *head, *temp,*ptr;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 35;
    head->link = NULL;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 33;
    temp->link = NULL;

    head ->link = temp;

    int data = 3;
    head = insert(head , data);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}
struct node* insert(struct node* head , int d)
{
    struct node *temp,*ptr;
    
    temp = malloc(sizeof(struct node));
    temp ->data = d;
    temp->link = NULL;
    
    ptr = head;
    while(ptr->link!= NULL)
    {
        ptr = ptr->link;
    }
    ptr->link =temp;

    return head;



}