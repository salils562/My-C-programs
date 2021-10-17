#include<stdio.h>
#include<stdlib.h>
#include "header.h"
void joiner(struct student []);
int roll(struct student []);
int main()
{
struct student e1[3];
int i,dh;
for(i=0;i<3;i++)
{
printf("enter roll,name,department,course and year of join of %d:",i+1);
scanf("%d%s%s%s%d",&e1[i].roll,&e1[i].name,&e1[i].depart,&e1[i].course,&e1[i].yoj);    
fflush(stdin);
}
printf("\n");
joiner(e1);
roll(e1);
return 0;
}
void joiner(struct student a1[])
{
int j;
for(j=0;j<3;j++)  
{
printf("%d %s %s %s %d",a1[j].roll,a1[j].name,a1[j].depart,a1[j].course,a1[j].yoj);
printf("\n");    
}  
}
int roll(struct student a2[])
{
int roll,n;    
printf("enter the roll no.:");
scanf("%d",&roll);
for(n=0;n<3;n++)
{
if(roll==(a2[n].roll))
{
printf("%d %s %s %s %d",a2[n].roll,a2[n].name,a2[n].depart,a2[n].course,a2[n].yoj); 
}     
}
return 0;
}
