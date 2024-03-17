#include<stdio.h>
#include<conio.h>
struct book
    {
        char bname[50];
        char aname[50];
        int price;
    };
void main()
{
    struct book b[20];
    int n,i;
    system("cls");
    printf("Enter the no. of record store = ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {   
        printf("Enter the record of book %d.\n",i);
        puts("Enter the name of book.");
        fflush(stdin);
        gets(b[i].bname);
        puts("Enter the name of authour of book.");
        fflush(stdin);
        gets(b[i].aname);
        puts("Enter the price of the book.");
        scanf("%d",&b[i].price);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("The record of book %d.\n",i);
        puts("The name of book.");
        puts(b[i].bname);
        puts("The name of the authour is.");
        puts(b[i].aname);
        puts("The price of the book.");
        printf("%d",b[i].price);
        printf("\n");
        printf("\n");
    }
}