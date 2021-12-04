#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    int a=0;
    char sentance[100];
    puts("Enter spaced sentance:");
    gets(sentance);
    puts("upgraded sentance is :");
    while(sentance[i]!='\0')
    {
        if(sentance[i]==' '){
            a++;
            i++;
            continue;
        }
        if(a>=1){
            a=0;
            printf(" %c",sentance[i]);
        }
        else{
            printf("%c",sentance[i]);
        }
        i++;

    
    }
return 0;
}