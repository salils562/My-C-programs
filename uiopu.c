#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
int n,*ptr,sum=0;
printf("size of numbers you want to add:");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
printf("enter the %d numbers you want to add:\n",n);//malloc,calloc,realloc;
for(i=0;i<n;i++)
{
printf("enter %d number:",i+1);   //for malloc:ptr=(int *)malloc(n*sizeof(int)); 
scanf("%d",&ptr[i]);              //for calloc:ptr=(int *)calloc(n,sizeof(int));
}                                 //for realloc:ptr=(int *)realloc(ptr,n*sizeof(int));
for(i=0;i<n;i++)
{
sum=sum+ptr[i];    
}
printf("sum of %d numbers is:%d\n",n,sum);
free(ptr);
return 0;
}