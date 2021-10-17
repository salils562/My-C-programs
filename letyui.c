#include<stdio.h>
#include<string.h>
int main()
{
char temp[10];    
char name[6][10]={"salil","mandvi","saba","sarvesh","kavya","landesh"};
int i,j;
for(i=0;i<5 ;i++)
{
for(j=i+1;j<6;j++)//0,1 1,2 2,3 3,4 4,5
{   
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
for(i=0;i<6;i++)
printf("%s\n",name[i]);
return 0;
}