#include<stdio.h>
int main()
{
int num,i;
printf("enter the number:");
scanf("%d",&num);
if(num==1)
{
printf("prime number\n");    
return 0;   
}
for(i=2;i<num;i++)
{
if(num%i==0)
printf("not a prime number");
else
printf("prime number");
break;
}    
return 0;
}