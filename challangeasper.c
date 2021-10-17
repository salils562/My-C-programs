#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,greatest=0,k=0;
int *bucket;
printf("Enter no of buckets in shop:");
scanf("%d",&n);
bucket=(int *)malloc(n*sizeof(int));
printf("Enter no. of candies present in each bucket:\n");
for(i=0;i<n;i++)
{
printf("%dst bukcet:",i+1);
scanf("%d",&bucket[i]);    
}
for(i=0;i<n;i++)
{
if(greatest<bucket[i])
{
greatest=bucket[i];    
k++;
}
}
printf("%d candies in %d bucket",greatest,k);
return 0;
}