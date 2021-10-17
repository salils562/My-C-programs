#include<stdio.h>
#include<stdlib.h>
void printer(int [],int);
int main()
{
int num,i;
int *ptr;
printf("enter number of students in your class:");
scanf("%d",&num);  
ptr=(int *)malloc(num*sizeof(int));
printf("now we can store marks of %d students\n",num);  
for(i=0;i<num;i++)
{
printf("enter marks of %d:",i+1);
fflush(stdin);
scanf("%d",&ptr[i]);    
}
printer(ptr,num);
return 0;
}
void printer(int a[],int num)
{
int j;
printf("marks of students is:\n");
for(j=0;j<num;j++)  
{
printf("marks of %d is:%d\n",j+1,a[j]);
}  
}