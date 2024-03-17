#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rev=0,rem,n;
    system("cls");
    printf("Enter no. = ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
     {
        rem = num%10;
        rev = rev*10 +rem;
        num = num/10;
     }
    if(rev==n)
     {
         printf("it is padlidrome no");
     }
    else
     {
         printf(" is not a palindrome number");
     }
     getch();

}
