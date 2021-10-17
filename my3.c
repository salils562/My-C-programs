#include<stdio.h>
struct book
{
char boname[10];
int price;
};
int main()
{
struct book e1[3];
int i,dh;
for(i=0;i<3;i++)
{
scanf("%s%d",&e1[i].boname,&e1[i].price);
while((dh=getchar())!='\n');   
}
printf("\n");
for(i=0;i<3;i++)
{
printf("name=%s\tprice=%d",e1[i].boname,e1[i].price);
printf("\n");
}
return 0;
}