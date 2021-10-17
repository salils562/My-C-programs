#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *ptr,*ttr;
char source[70],target[70],str[80];
printf("enter source file:");
scanf("%s",source);
printf("enter target file:");
scanf("%s",target);
ptr=fopen(source,"r");
if(ptr==NULL)
{
puts("unable to open file\n");    
fclose(ptr);    
exit(0);    
}
ttr=fopen(target,"a");
if(ttr==NULL)
{
printf("unable to open target file\n");
exit(0);
fclose(ttr);    
}
while(fgets(str,75,ptr)!=NULL)
fputs(str,ttr);
printf("appending file is completed!!!\n");
fclose(ptr);
fclose(ttr);
return 0;
}