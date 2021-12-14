#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head,*start,*temp=0;
    int count = 0;
    int choice = 1;
    start = 0;
    
    


    while(choice)

    {
        head= (struct node*)malloc(sizeof(struct node));
        printf("Enter the data item\n");
        scanf("%d",&head->data);
        if(choice!=1)
        {
            temp->link=head;
            temp = head;
        }
        else
        {
            start=temp = head;

        }
        fflush(stdin);
        printf("Do you want to coninute(type 0 or 1)?\n");
        scanf("%d",&choice);
        
    }
    temp->data = 0;
    temp = start;
    printf("\nstatus of the linked list is \n");
    while(temp!= 0)
    {
        printf("%d=>",temp->data);
        count++;
        temp = temp->link;
    }
    printf("NULL\n");
    printf("No. of the in the list = %d\n",count);
    return 0;
}
