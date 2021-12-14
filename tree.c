#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};
void main()
{
    struct node *head,*temp,*ptr;
    int choice =1;
    head = NULL;
    while(choice)
    {
        temp = malloc(sizeof(struct node));
        printf("Enter the data \n");
        scanf("%d",&temp->data);
        temp->link = NULL;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            while(ptr->link!= NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
        printf("Do you want to continue(type 0 or 1)\n");
        scanf("%d",&choice);
        ptr = head;
    }
    printf("LINKED LIST IS GIVEN BELOW:\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}
