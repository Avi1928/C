#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    system("cls");
    printf("Enter no. = ");
    scanf("%d",&n);

    for(n=2;n<=10;n++)
      {  
         for (i=1;i<=10;i++)
          {
             printf("%d X %d = %d\n",n,i,n*i);
          }    
      }
}