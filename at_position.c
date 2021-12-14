#include<stdio.h>
#include<stdlib.h>

//insertion of node at the end of linked list

struct node* insert(struct node *head);
struct node
{
    int data;
    struct node *link;
};

void main()
{
    
    struct node *head, *temp,*ptr;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 20;
    temp->link = NULL;

    head->link = temp;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data =40;
    temp->link = NULL;
    head->link->link = temp;

    
    head = insert(head);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}
struct node* insert(struct node* head)
{
    struct node *temp,*ptr;
    ptr = head;
    
    int position = 3;
    while(position!=2)
    {
        ptr = ptr->link;
        position--;
    }
    temp->link =ptr->link;
    ptr->link = temp;
    return head;



}