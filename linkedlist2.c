#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("elements: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *linkedListInsertFirst(struct node *head,int p)
{
struct node *str;
str=(struct node *)malloc(sizeof(struct node));
str->next=head;
str->data=p;
return str;
}
struct node *linkedListInsertBetween(struct node *head,int p,int index)
{
int i=0;    
struct node *ptr;
ptr=(struct node *)malloc(sizeof(struct node));
struct node *pr=head;
while(i!=index-1)
{
pr=pr->next;
i++;
}
ptr->data=p;
ptr->next=pr->next;
pr->next=ptr;
return head;
}
struct node *linkedListInsertEnd(struct node *head,int element)
{
struct node *ptr;
ptr=(struct node *)malloc(sizeof(struct node));  
struct node *p;
p=head;  
while(p->next!=NULL)
{
p=p->next;
}
ptr->data=element;
p->next=ptr;
ptr->next=NULL;
return head;
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *first;
    first = (struct node *)malloc(sizeof(struct node));
    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    struct node *third;
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 5;
    head->next = first;
    first->data = 6;
    first->next = second;
    second->data = 7;
    second->next = third;
    third->data = 8;
    third->next = NULL;
   /* head=linkedListInsertFirst(head,12); inserts at first*/
   /* head=linkedListInsertBetween(head,70,2); inserts element at between */
  /* head=linkedListInsertEnd(head,40); inserts element at last */
    linkedListTraversal(head);
    return 0;
}
