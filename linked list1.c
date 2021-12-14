#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;

};

struct node*createLinkedList(int n);

int main()
{
    int n = 0;
   struct  node*head= NULL;
    struct node *head = NULL;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    head = createLinkedList(n);
    
    return 0;
}
struct node * createLinkedList(int n)
{
    int i = 0;
    node*head = NULL;
    node*temp = NULL;
    node*p = NULL;

    for(i=0;i<n;i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&temp->data);
        temp->link = NULL;

         if(head ==NULL)
         {
             head = temp;
         }
         else{
             p = head;
             while(p!=NULL)
             p = p->link;
             p->link = temp;
         }
    }
}