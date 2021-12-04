#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
char op[]="salil is good";
while(op[i]!='\0')
{
    if(op[i]==' '){
        i++;
    continue;
    }
    else{
    printf("%c",op[i]);
    i++;
    }
}
return 0;   
}