#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
char name[30];
int age;    
};
int main()
{
FILE *ptr;
struct student e[5];
char pop[90];
ptr=fopen("myfile.txt","a");
int i,n;
for(i=0;i<5;i++)
{
printf("enter name of student:");
fflush(stdin);
scanf("%s",&e[i].name); 
printf("enter age of student:");
fflush(stdin);
scanf("%d",&e[i].age);   
}
fprintf(ptr,"\n");
for(i=0;i<5;i++)
{
fprintf(ptr,"%s %d",e[i].name,e[i].age);   
fprintf(ptr,"\n"); 
}
fclose(ptr);
ptr=fopen("myfile.txt","r");
if(ptr==NULL)
{
puts("unable to load file\n");
exit(0);   
fclose(ptr); 
}
while(fgets(pop,85,ptr)!=NULL)
{
n=0;    
if(strcmp(e[n].name,e[4-n].name)>0 && n<=2)
{

n++;
}    
}
fclose(ptr);
return 0;
}