#include<stdio.h>
#include<stdlib.h>

// insertion a the beginning

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
    head->data = 10;
    head->link = NULL;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 20;
    temp->link = NULL;

    head ->link = temp;

    
    head = insert(head , 5);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}
struct node* insert(struct node* head , int d)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp ->data = d;
    temp ->link =NULL;

    temp->link = head;
    head = temp;
    return head;



}