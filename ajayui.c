#include<stdio.h>
int main(){
int fact=1; 
float sum=0;   
for(int i=1;i<=3;i++){
    for(int j=1;j<=5;j++){
    if(j%2!=0){
    for(int z=1;z<=j;z++)
    fact=fact*z;
    printf("%d\n",fact);
    sum=sum+fact;
    fact=1;
    }
    }
}
printf("Sum = %f",sum);
return 0;
}
