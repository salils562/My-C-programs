#include<stdio.h>
int main()
{
char che;   
FILE* ptr;
ptr=fopen("D:\\english sem2\\saer.docx","r"); 
while(che!=EOF)
{
che=fgetc(ptr);     
printf("%c",che);  
}
fclose(ptr);
return 0;
}