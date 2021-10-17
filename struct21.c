#include<stdio.h>
#include<stdlib.h>
struct student
{
char name[20];
int roll;
float marks;    
};
int main()
{
FILE* ptr;    
struct student e[10];
int i,num,n=0;
for(i=0;i<10;i++)
{
printf("enter 1 for more data and 0 to terminate loop:\n");
scanf("%d",&num);   
if(num==0)
break;
n++;
printf("enter name of student:");
fflush(stdin);
scanf("%s",&e[i].name);
printf("enter roll no:");
fflush(stdin);
scanf("%d",&e[i].roll);
printf("enter marks:");
fflush(stdin);
scanf("%f",&e[i].marks);
}
printf("n:%d\n",n);
ptr=fopen("myfile.txt","wb");
for(i=0;i<n;i++)
{
fwrite(&e,sizeof(e),n,ptr);
}
fclose(ptr);
ptr=fopen("myfile.txt","rb");
for(i=0;i<n;i++)
{
fread(&e,sizeof(e),n,ptr);
printf("%s%10d%10.2f",e[i].name,e[i].roll,e[i].marks);   
}
fclose(ptr);
return 0;
}
