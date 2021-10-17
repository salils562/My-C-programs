#include<stdio.h>
int main()
{
int arr[5];
printf("enter value of arr[0]:");
scanf("%d",arr+3);
printf("arr[2]=%d\n",arr[3]);    
return 0;
}