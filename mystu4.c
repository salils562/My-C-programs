#include<stdio.h>
struct student
{
char name[10];
int marks;    
};
int join(struct student);
int join1(struct student *);
int join2(char *,int);
int main()
{
struct student e1={"salil",80};
join(e1);
join1(&e1);
join2(e1.name,e1.marks);
return 0;
}
int join(struct student a1)
{
printf("%s %d",a1.name,a1.marks);  
printf("\n");
return 0;  
}
int join1(struct student *ptr)
{
printf("%s %d",ptr->name,ptr->marks);
printf("\n");
return 0;
}
int join2(char *a,int b)
{
printf("%s %d",a,b);
printf("\n");
return 0;    
}