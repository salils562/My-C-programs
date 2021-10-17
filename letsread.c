#include<stdio.h>
#include<string.h>
int main()
{
FILE* ptr;  
int new=0,ch=0,space=0,npo=0;
char chw;  
ptr=fopen("myfile.txt","r");
while(1)
{
chw=fgetc(ptr);
npo++;
if(chw==EOF)
break;
if(chw==' ')
space++;
if(chw=='\n')
new++;
}
npo=npo-(space+new);
printf("no.of characters:%d\n",npo);
printf("no of new lines:%d\n",new);
printf("no.of spaces:%d\n",space);
fclose(ptr);
char write[100];
ptr=fopen("myfile.txt","a");
printf("enter anything\n");
while(strlen(gets(write))>0)
{
fputs(write,ptr);
fputs("\n",ptr);
}
fclose(ptr);
return 0;    
}