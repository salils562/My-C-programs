#include<stdio.h>
#include<stdlib.h>
struct student{
char name[20];
int roll;    
};
int main()
{
FILE* fp;   
struct student e;
int i;
printf("enter name of student:");
fflush(stdin);
scanf("%s",e.name);
puts("enter roll no.");
scanf("%d",&e.roll);
fp=fopen("myfile.txt","wb");
fwrite(&e,sizeof(e),1,fp);
fclose(fp);
fp=fopen("myfile.txt","rb");
fread(&e,sizeof(e),1,fp);
printf("%s %d",e.name,e.roll);
return 0;
}