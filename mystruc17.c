#include<stdio.h>
#include<stdlib.h>
struct bank{
char name[50];
int acc;
float bal;
};
void funcbal(struct bank [],int);
int func2(struct bank [],int);
int main()
{
struct bank n1[200];
int i,n,c=0;
printf("enter any numeric key to add account and 0 to terminate program:\n");
for(i=0;i<200;i++)
{
printf("n:");    
scanf("%d",&n);  
printf("\n"); 
if(n==0)
{
break;    
}
else
{      
printf("enter name:");
scanf("%s",&n1[i].name);
fflush(stdin); 
printf("enter account number:");
scanf("%d",&n1[i].acc);
fflush(stdin);
printf("enter balance:");
scanf("%f",&n1[i].bal);
fflush(stdin);
c++;
}
}
printf("\n");
funcbal(n1,c);
func2(n1,c);
return 0;
}
void funcbal(struct bank a1[],int c)
{
int j;
printf("The peoples who have less than 100 ruppe in their acc:\n");
for(j=0;j<c;j++)    
{
if((a1[j].bal)<100)
{
printf("%s\t%d\n",a1[j].name,a1[j].acc);    
}    
}
}
int func2(struct bank e1[],int c)
{
int num;
printf("enter 1 for deposit and 2 for withdraw:");
scanf("%d",&num);
switch(num)
{
case 1:
{
printf("fill the form:\n");  
int ptt_1;
float amt;
int o;
printf("enter account number:");
scanf("%d",&ptt_1);
printf("enter amount to be added:");
scanf("%f",&amt);
printf("\n");
for(o=0;o<c;o++)
{
if((ptt_1)==(e1[o].acc))
{
e1[o].bal=(e1[o].bal)+amt; 
printf("mr/mrs.%s total amount credited:%f\n balance updated:%f\n",e1[o].name,amt,e1[o].bal); 
break; 
}    
}
break;  
}
case 2:
{
int atp,p;
float ammou;
printf("enter account no:");
scanf("%d",&atp);
printf("NOTE:-only if you have more than 100 credit balace,then you can debit amount\n");
printf("enter amount to withdraw:");
scanf("%f",&ammou);
for(p=0;p<c;p++)
{
if(atp==(e1[p].acc))
{
if(ammou<100)
{
printf("insufficient balance\n");    
}  
else
{
e1[p].bal = (e1[p].bal)-ammou; 
printf("mr/mrs.%s your account updated with following information:\n",e1[p].name);
printf("Total withdraw:%f and amount left:%f\n",ammou,e1[p].bal);  
}  
}    
}
} 
} 
return 0;   
}