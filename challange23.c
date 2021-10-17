#include<stdio.h>
#include<stdlib.h>
void winner(int [],int [],int);
int main()
{
int n,i;
int *pavitra,*ritik;
printf("Enter no of units in pavitra and ritik sir army:");
scanf("%d",&n);
pavitra=(int *)malloc(n*sizeof(int));//creates pavitra[n]
ritik=(int *)malloc(n*sizeof(int));
printf("Enter no.of soliders in pavitra and ritik army\n");
for(i=0;i<n;i++)
{
printf("ritik %d team:",i+1); 
scanf("%d",&ritik[i]);
fflush(stdin);
printf("pavitra %d team:",i+1);
scanf("%d",&pavitra[i]);   
}
winner(pavitra,ritik,n);
return 0;
}
void winner(int pavitra[],int ritik[],int n)
{
int rcout=0,pcout=0,j;
for(j=0;j<n;j++)
{
if(pavitra[j]>ritik[j])
pcout++;
else if(pavitra[j]==ritik[j])
continue;
else
rcout++;   
}
if(pcout>rcout)
puts("pavitra won");
else if(rcout>pcout)
puts("ritik won");
else if(rcout==pcout)
puts("tie");    
}