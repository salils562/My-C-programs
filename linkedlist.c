#include<stdio.h>
#include<stdlib.h>
struct linkedlistc{
int data;
struct linkedlistc* next;
};
void display(struct linkedlistc* ptr)
{
while(ptr!=NULL)
{
printf("data: %d\n",ptr->data);
ptr=ptr->next;   
}
}
int main()
{
struct linkedlistc *first;
struct linkedlistc *second;
struct linkedlistc *third;
first=(struct linkedlistc *)malloc(sizeof(struct linkedlistc));
second=(struct linkedlistc *)malloc(sizeof(struct linkedlistc));
third=(struct linkedlistc *)malloc(sizeof(struct linkedlistc));
first->data=12;
first->next=second;
second->data=13;
second->next=third;
third->data=14;
third->next=NULL;
display(first);
}