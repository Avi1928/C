#include<stdio.h>
#include<conio.h>
void main()
{
    int i=2,n=2;
    system("cls");
    printf("Enter no. = ");
    
    scanf("%d",&n);
    printf("\n");
    
    while(n<=10)
        {  i=1;
           while (i<=10)
           {
               printf("%d X %d = %d\n",n,i,n*i);
               i=i+1;
           }
           printf("-------------\n");
           n=n+1;
        }
    
}