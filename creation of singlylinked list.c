#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
   int num,i;
    struct node *head ,*temp;
    head = (struct node*) malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Memory is not allocated");
    }
    else
    {
        printf("Enter data for node 1");
        scanf("%d",&num);
        head->data = num;
        head->link = NULL;
        temp = head;
    }
    

   

    print_data(head);
     return 0;
}
void print_data(struct node *head)
{
    if(head==NULL)
    {

        printf("Node is empty");
        struct node *ptr = NULL;
        ptr = head;
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr= ptr->link;
        }
    }
}