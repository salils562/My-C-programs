#include<stdio.h>
void update(int*,int*);
int main()
{
int a,b;
scanf("%d%d",&a,&b);
update(&a,&b);
printf("%d\t%d",a,b);
return 0;
}
void update(int* c,int * d)
{
int s;
s=*c;    
*c=*c+*d;
*d=s-*d;
if(*d<0)
-1*(*d);
}