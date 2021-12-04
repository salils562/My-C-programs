#include<stdio.h>
#include<stdlib.h>
void roundoff(int [],int);
int main()
{
int *num;
int i,n;
printf("Enter number of grades to add:");
scanf("%d",&n);
num=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
printf("marks of %d student:",i+1);    
scanf("%d",&num[i]);   
}
roundoff(num,n);
return 0;       
}
void roundoff(int arr[],int n)
{
printf("\n"); 
int *arr1;
arr1=(int *)malloc(n*sizeof(int));   
int i,j=0; 
for(i=0;i<n;i++)
arr1[i]=arr[i];   
for(i=0;i<n;i++)
{
while(j!=1)
{
if(arr1[i]%5==0)
break;
else
arr1[i]++;    
}
}
//we have arr1[]={25,65,75,55,25} and arr[]={23,64,75,54,23}
for(i=0;i<n;i++)
{
if(arr[i]<38)
{
printf("%d\n",arr[i]);    
continue;
}
else if((arr1[i]-arr[i])<3)
arr[i]=arr1[i];
printf("%d\n",arr[i]);
}
}
