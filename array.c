#include<stdio.h>
void tyr(int *);
int main()
{
int arr[3][2]={{3,4},{5,6},{6,7}};
// printf("%d\n",arr);    
printf("%d",*(*(arr+1)+1));   
return 0;
}
