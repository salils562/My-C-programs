#include<stdio.h>
int main()
{
FILE* ptr;
char source[20],ch;
int i=0;
printf("enter file name:");
scanf("%s",source);
ptr=fopen(source,"r");
while(1)
{
ch=fgetc(ptr);     
if(ch==EOF)    
break;  
if(ch=='\n')
i++;
printf("%c",ch);
}
printf("\nnew lines:%d",i);
fclose(ptr);
return 0;
}
