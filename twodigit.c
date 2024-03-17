#include<stdio.h>
#include<conio.h>
void main()
{   // sum of digits.
    int a, no,rem, sum;
    system("cls");
    printf("Enter two digit no =");
    scanf("%d",&no);
    rem=no%10;
    a=no/10;
    sum=rem+a;
    printf("sum of each digit =%d",sum);
}