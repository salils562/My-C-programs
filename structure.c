#include<stdio.h>
int main()
{
struct salil
{
char name[10];
int roll;
int marks;    
};
struct salil e1;
struct salil e1={"salil",101,23};
printf("%s",e1.name);
return 0;
}