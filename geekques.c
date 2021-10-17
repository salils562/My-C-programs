#include<stdio.h>
int main()
{
int num,sum=0;
int price_1=2,price_2=4;
int i,n;
printf("enter the number of participants:");
scanf("%d",&num);
for(i=1;i<=num;i++)   
{
printf("enter the no. of question solved by:%d:",i);
scanf("%d",&n);
if(n==0)
{
printf("%d is fail\n",i);    
}    
if(n==1)
{
printf("%d solved 1 question\n",i);
sum=sum+price_1;    
}
if(n==2)
{
printf("%d solved 2 questions\n",i);
sum=sum+price_2;    
}
}
printf("we have to give %d ruppess to shopkeeper\n",sum); 
return 0;
}