#include<stdio.h>
struct shail{
char salio[30];    
char posi[30];
float paisa;
};
int main()
{
struct shail e1[4]={{"discovery of india","jawaharlal nehru",425.50},{"my experiments with truth"
,"mahatma gandhi",375.50},{"sunny Days","sunil Gavaskar",95.50},{"one more over","erapalli prasanna",85.00}};
int i;  
for(i=0;i<4;i++)
{
printf("%-30s%-20s%-20.3f\n",e1[i].salio,e1[i].posi,e1[i].paisa);    
} 
return 0;
}