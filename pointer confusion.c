#include<stdio.h>//kabhi bhi ab confusion ho toh ye dekhlena
struct kaka{
int a;
char name[10];    
};
void kakka(struct kaka*,struct kaka*);
int main()
{
struct kaka e1={11,"mummy"};//we will pass address of e1 beacuse it is not an array of structure    
struct kaka e[2]={{11,"kakka"},{13,"babba"}};
kakka(e,&e1);//so we can see that if array is declared than is variable is address
return 0;
}
void kakka(struct kaka* p,struct kaka* a)
{
printf("roll no=%d\n",(*p).a);
printf("name=%s\n",(*p).name);
printf("roll no=%d\n",a->a);
printf("name=%s\n",a->name);
}