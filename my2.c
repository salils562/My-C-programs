#include<stdio.h>
#define OMOD(x)(x<0?x*(-1):x)
int main()
{
int a,d;
printf("enter x:");
scanf("%d",&a);
d=OMOD(a);
printf("modulus:%d\n",d);
return 0;

}