#include<stdio.h>
struct company{
char model[20];
int yom;
char material[50];
int quantity;
};
void func(struct company []);
int main()
{
struct company e1[6]={{"AA0",2020,"alloy + mild steel",20},{"BB0",2020,"alloy+high steel",30},
{"CC0",2020,"high steel",10},{"DD0",2021,"carbon steel",5},{"EE0",2021,"titanium",6},{"FF0",2021,"cast iron",10}
};
func(e1);
return 0;
}
void func(struct company a1[])
{
int i;
printf("serial number:\tparts:");
printf("\n");
for(i=1;i<4;i++)
{
printf("%s\t%s",a1[i].model,a1[i].material);
printf("\n");    
}    
}