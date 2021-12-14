#include<stdio.h>
#include<stdlib.h>
struct node*insert(struct node *head ,int data);
struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *head,*temp,*ptr;
    head = malloc(sizeof(struct node));
    head->data = 20;
    head->link =NULL;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 30;
    temp->link = NULL;

    head->link =temp;

    head = insert(head, 10);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
}
struct node* insert(struct node *head,int data)
{
    int d = data;
    struct node *temp=head;
    temp = malloc(sizeof(struct node));
    temp->data = d;
    temp->link = head;
    head = temp;
    return head;
}