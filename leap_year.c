#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    system("cls");
    printf("Enter the year which you want to check it\nis either leap year or a century leap year = ");
    scanf("%d",&year);
    if (year%4==0 && year%100 != 0)
        { 
           printf("\nIt is a leap year.");
        }
    else 
     {
         if(year%400 == 0 )
        {
           printf("It is century leap year.");
        }
         else
        {
           printf("It is neither a leap year nor a century year.\n");
        }  
     }  
}