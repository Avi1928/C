#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j=0,no;
    system("cls");
    printf("Enter no.=");
    scanf("%d",&no);
    for(i=1;i<=no;i=i+1);
    {
        if(no%i==0)
        {
            j=j+1;
        }
    }
    if(j==2)
    {
        printf("It is prime number.");
    }
    else
    {
        printf("It is not prime number.");
    }
}    