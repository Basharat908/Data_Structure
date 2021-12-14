#include<stdio.h>
#include<stdlib.h>
struct node* display(struct node *head);       // function prototype
void add_at_pos(struct node* head, int data, int pos);

struct node
{
    int data;
    struct node *link;
};

int main()
{   
    struct node *head = malloc(sizeof(struct node)); 
     // creating a head node
    head->data = 14;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 15;
    current->link = NULL;
    head->link= current;


    current = malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link->link =current;

// inserting a node at the beginning
    struct node*ptr = malloc(sizeof(struct node));
    ptr->data = 10;
    ptr->link =NULL;
    ptr->link = head;
    head=ptr;

    current = malloc(sizeof(struct node)); // creating a node at the end of list
    current->data = 50;
    current->link = NULL;
    head->link->link->link->link = current;


    int data = 67,position = 3;
    add_at_pos(head, data, position);
    display(head);      // function call
    return 0;
}
 void add_at_pos(struct node* head, int data, int pos)
 {
     struct node *ptr = head;
     struct node *ptr2 = malloc(sizeof(struct node));
     ptr2->data = data;
     ptr2->link = NULL;

     
     while(pos!=2)
     {
         ptr = ptr->link;
         pos--;
     }
     ptr2->link = ptr->link;
     ptr->link =ptr2;
 }
struct node* display(struct node *head)   // function definiton 
{
    struct node *ptr;
    ptr = head;
    if(head==NULL)
    {
        printf("Node is empty!");
    }
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr= ptr->link;
    }   


}