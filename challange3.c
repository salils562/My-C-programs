#include<stdio.h>
int greatest(int,int,int,int);
int main()
{
int a,b,c,d;
int big;
scanf("%d%d%d%d",&a,&b,&c,&d);
big=greatest(a,b,c,d);
printf("the biggest number is:%d",big);
return 0;    
}
int greatest(int a,int b,int c,int d)
{    
int big,big2,biggest;
if(a>b)
big=a;
else
big=b;
if(c>d)
big2=c;
else
big2=d;
if(big>big2)
biggest=big;
else
biggest=big2;

return biggest;
}