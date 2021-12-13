#include <stdio.h>
#include <stdlib.h>
struct Library
{
    int assesion;
    char title[20];
    char author[20];
    float price;
    int indication;
};
void displayInformation(struct Library[], int);
void authorBooks(struct Library e[], int n)
{
    char ch[20];
    printf("Enter the author name:");
    scanf("%s", ch);
    printf("Books printed by the author are:\n");
    for (int i = 0; i < n; i++)
    {
        if (ch == e[i].author)
        {
            printf("Book name:%s\n", e[i].title);
        }
    }
    printf("\n");
}

int main()
{
    struct Library *lib;
    int n;
    int j=1;
    while(j!=0){    
    printf("\n1.Add book information\n2.Display book information\n3.List all books of given author\n");
    printf("4.List the count of books in the library\n");
    printf("5.List the books in the order of accession number.\n6.Exit\n");
    printf("\n");
    int num;
    printf("Enter your choice: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter number of books information you want to add: ");
        scanf("%d", &n);
        lib = (struct Library *)malloc(n * sizeof(struct Library));
        for (int i = 0; i < n; i++)
        {
            printf("Enter the information of %d book\n", i + 1);
            printf("Enter assesion code: ");
            scanf("%d", &lib[i].assesion);
            printf("Enter title of book: ");
            scanf("%s", lib[i].title);
            printf("Enter author of book: ");
            scanf("%s", lib[i].author);
            printf("Enter Price of book: ");
            scanf("%f", &lib[i].price);
            printf("Enter 1 for Book issued or 2 for book not issued: ");
            scanf("%d", &lib[i].indication);
        }
        break;
    case 2:
        displayInformation(lib, n);
        break;
    case 3:
        authorBooks(lib, n);
        break;
    case 4:
        printf("Number of books in the library are:%d\n", n);
        break;
    case 5:
        printf("Bhai ye assecion number wala samjha me nhi aya kya bol raha\n");
        break;
    case 6:
        printf("Thanks for visiting our library\n");
        exit(0);

    default:
        printf("please enter the right case");
        j=0;
    }
    }
    return 0;
}
void displayInformation(struct Library e2[], int n)
{
    printf("Displaying the information of the books added:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name of book:%s author:%s assection number:%d Price:%f", e2[i].title, e2[i].author, e2[i].assesion, e2[i].price);
        printf("\n");
    }
    printf("\n");
}