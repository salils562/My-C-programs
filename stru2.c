#include<stdio.h>
float func(float mass,float mass2)
{
float mass3;
mass3=(mass/mass2)*100;
return mass3;
}
int main()
{
float masssol,masssolv;
float mbmp;
printf("enter mass of solute:");
scanf("%f",&masssol);
printf("enter mass of solvent:");
scanf("%f",&masssolv);
mbmp=func(masssol,masssolv);
printf("mass by mass percentage:%f\n",mbmp);
return 0;
}