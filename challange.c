#include <stdio.h>
#include <stdlib.h>
void roundoff(int[], int);
int main()
{
    int n, i;
    int *ptr;
    printf("enter the number of students data you want to take:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); //ptr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter marks of %d:", i + 1);
        scanf("%d", &ptr[i]);
    }
    roundoff(ptr, n);
    return 0;
}
void roundoff(int ptr2[], int s)
{
    int num, j, k;
    int *fp;
    fp = (int *)malloc(s * sizeof(int)); //fp[s];
    for (j = 0; j < s; j++)
    {
        fp[j] = ptr2[j];
    } //we have copied original values into another array;
    for (j = 0; j < s; j++)
    {
        num = fp[j];
        for (k = 1; k <= 5; k++) //
        {
            if (num % 5 == 0)
            {
                fp[j] = num;
                break;
            }
            else
                num++;
        } //terminate at k
    }     //terminate at j
    for (j = 0; j < s; j++)
    {
        if (ptr2[j] < 40)
            continue;
        if (fp[j] - ptr2[j] < 3)
            ptr2[j] = fp[j];
    }
    printf("Therefore rounded off marks are:\n");
    for (j = 0; j < s; j++)
    {
        printf("marks of %d is: %d\n", j + 1, ptr2[j]);
    }
}