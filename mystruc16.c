#include<stdio.h>
struct anuj
{
int roll;
char name[20];    
};
int main()
{
struct anuj e1[2]={{11,"anuj"},{12,"salil"}};
printf("%s",e1[1].name);
return 0;
}