#include <stdio.h>
struct date
{
    int day;
    char month[8];
    int year;
};
struct employee
    {
        int em_code;
        char name[20];
        struct date da_joi[3];
    };
void func(struct employee []);    
int main()
{
    struct employee e1[3] = {{121, "anuj agrawal", {01, "jul", 2011}}, {122, "yash bhawswar", {02, "june", 2012}}, {123, "salil sharma", {03, "march", 2013}}};
    int i;
    printf("code:\tname of employee:\tdate of join:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t%s\t        %d-%s-%d", e1[i].em_code, e1[i].name, e1[i].da_joi->day, e1[i].da_joi->month, e1[i].da_joi->year);
        printf("\n");
    }
    func(e1);
    return 0;
}
void func(struct employee a1[])
{
int day;char month[6];int year;    
printf("enter the date:");
scanf("%d%s%d",&day,&month,&year);
int i;
printf("peoples who have more than 3-years of experience\n");
for(i=0;i<3;i++)
{
if((a1[i].da_joi->year)>(year-a1[i].da_joi->year))   
{
printf("%s\n",a1[i].name); 
printf("experience:%d\n",year-a1[i].da_joi->year);   
} 
}

}