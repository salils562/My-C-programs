#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,s;
int ptr[]={1,2,3,4,5};
for(i=0;i<5/2;i++)
{    
s=ptr[i];
ptr[i]=ptr[4-i]; 
ptr[4-i]=s;
}
printf("reversed:\n");
for(i=0;i<5;i++)
{
printf("%d\n",ptr[i]);    
}
return 0;
}
