#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void main()
{
    struct node *start,*temp ,*ptr=NULL;
    int choice =1;
    start = NULL;
while(choice)
{
    temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",temp->data);
    temp->link = NULL;
    if(start == NULL)
    {
        start=temp;
    }   
    else
    {
      while(ptr->link!=NULL)
        {
        ptr=ptr->link;
        }
       ptr->link=temp;
    }
    ptr = start;
    printf("Do you want to continue (type 0 or 1):");
    scanf("%d",&choice);
    
  }
  ptr = start;
  printf("\nLinked List is given below:\n");
   
  while(ptr!=NULL)
  {   
      printf("%d\t",ptr->data);
      ptr =ptr->link;
  }   
}
