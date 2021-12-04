#include <stdio.h>
#include <stdlib.h>
struct details
{
    char name[40];
    int acc;
    float balance;
};
void update(struct details r1[], int t)
{
    printf("\n\n");
    printf("Updated accounts details:\n");
    int i;
    for (i = 0; i < t; i++)
    {
        printf("name:%s account no:%d balance:%f", r1[i].name, r1[i].acc, r1[i].balance);
        printf("\n");
    }
}
void display(struct details e1[], int n)
{
    int i;
    printf("Added account details:\n");
    for (i = 0; i < n; i++)
    {
        printf("name:%s  account no:%d  balance:%.2f", e1[i].name, e1[i].acc, e1[i].balance);
        printf("\n");
    }
}
void creditDebit(struct details[], int);
int main()
{
    struct details *e;
    int n, i;
    printf("Enter number of accounts you want to add:");
    scanf("%d", &n);
    e = (struct details *)malloc(n * sizeof(struct details));
    for (i = 0; i < n; i++)
    {
        printf("Enter name of %d person:", (i + 1));
        scanf("%s", e[i].name);
        fflush(stdin);
        printf("Enter account number:");
        scanf("%d", &e[i].acc);
        printf("Enter Balance:");
        scanf("%f", &e[i].balance);
    }
    printf("\n");
    display(e, n);
    printf("NOTE:--\n");
    printf("Only people with more than 100 ruppess in account can debit money\n");
    printf("\n");
    creditDebit(e, n);
    update(e, n);
    return 0;
}
void creditDebit(struct details a1[], int n)
{
    int i, num;
    printf("1. debit money\n2. credit money:");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    {
        int acf;
        float debit;
        for (i = 0; i < n; i++)
        {
            if (a1[i].balance < 100)
            {
                printf("Peoples who can't debit money:\n");
                printf("%s with account number: %d\n", a1[i].name, a1[i].acc);
            }
        }
        printf("Enter account number to debit:");
        scanf("%d", &acf);
        printf("\n\n");
        for (i = 0; i < n; i++)
        {
            if (a1[i].acc == acf)
            {
                if (a1[i].balance < 100)
                {
                    printf("sorry you do not have enough credit balance!!\n");
                    break;
                }
                else
                {
                    printf("Dear %s enter amount to be debited:", a1[i].name);
                    scanf("%f", &debit);
                    a1[i].balance = a1[i].balance - debit;
                    printf("Dear %s amount debited is:%f\n", a1[i].name, debit);
                    printf("Amount left in your account is: %f", a1[i].balance);
                    break;
                }
            }
        }
        break;
    }
    case 2:
    {
        float credit;
        int acg;
        printf("Enter account number:");
        scanf("%d", &acg);
        for (i = 0; i < n; i++)
        {
            if (acg == a1[i].acc)
            {
                printf("Dear %s please enter amount to be credited:", a1[i].name);
                scanf("%f", &credit);
                a1[i].balance = a1[i].balance + credit;
                printf("Amount added: %f\n", credit);
                printf("Dear %s your account is updated with balance: %f", a1[i].name, a1[i].balance);
                break;
            }
        }
        break;
    }
    default:
        printf("please choose the correct option!");
    }
}