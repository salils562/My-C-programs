#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,sum=0;
int* ptr;
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));//ptr[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&ptr[i]);  
     fflush(stdin); 
    }
    for(i=0;i<n;i++)
    {
      sum=sum+ptr[i];  
    }  
    printf("%d",sum);
return 0;
}