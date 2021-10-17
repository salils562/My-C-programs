#include<stdio.h>
int main()
{
int num,arr[20];
int rem,s=8,i=1,j=0;
printf("Enter the number:");
scanf("%d",&num);
while(i!=0)
{
rem=num%s;
arr[j]=rem;
num=num/s;
if(num==0||num==1||num==2||num==3||num==4||num==5||num==6||num==7)
{
arr[j+1]=num;
i=0;    
}
j++;
}
printf("Octal number is = ");
for(i=j;i>=0;i--)
printf("%d",arr[i]);
return 0;
}