#include<stdio.h>
#include<conio.h>
void main()
{   
    // for checking which numebr is greatest.
    int num1,num2,num3,ask;
    again:
    //system("cls");
    printf("Enter no1 = ");
    scanf("%d",&num1);
    printf("Enter no2 = ");
    scanf("%d",&num2);
    printf("Enter no3 = ");
    scanf("%d",&num3);
    if (num1>num2)
    {
         if(num1>num3)
          {
              printf("\nNum 1 is greatest that is %d.",num1);
          }
          /*else
           {
               printf("Num 2 is greatest that is %d",num2);
           }*/
    }
    else
    {
        if(num2>num3)
         {
             printf("\nNum 2 is greatest that is %d.",num2);
         }
        else
         {
             printf("\nNum 3 is greatest that is %d.\n",num3);
         }
    }
    printf("\nIf you want check again press Y for yes & N for no");
    ask = getche();
    if (ask=='y'||ask=='Y')
        {
            goto again;
        }

}