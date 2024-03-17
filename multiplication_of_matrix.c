#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
   int m1[10][10],m2[10][10],mr[10][10],r1,c1,r2,c2,i,j,k;
   system("cls");
   printf("Enter the no. of rows of first matrix =  ");
   scanf("%d",&r1);
   printf("Enter the no of column of first matrix =  ");
   scanf("%d",&c1);
   printf("\n");
   puts("Enter the value of first matrix.");
   for (i=0;i<r1;i++)
   {
       for (j=0;j<c1;j++)
       {
           scanf("%d",&m1[i][j]);
       }
   }
   printf("\n");
   printf("Enter the no. of rows of second matrix =  ");
   scanf("%d",&r2);
   printf("Enter the no of column of second matrix =  ");
   scanf("%d",&c2);
   printf("\n");
   puts("Enter the value of second matrix.");
   for (i=0;i<r2;i++)
   {
       for (j=0;j<c2;j++)
       {
           scanf("%d",&m2[i][j]);
       }
   }
   puts("You matrix are :-");
   printf("\n");
   puts("First matrix :- ");
   for (i=0;i<r1;i++)
   {
       for (j=0;j<c1;j++)
       {
           printf("%d\t",m1[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   puts("\nSecond matrix :-");
   for (i=0;i<r2;i++)
   {
       for (j=0;j<c2;j++)
       {
           printf("%d\t",m2[i][j]);
       }
       printf("\n");
   }
   if (c1==r2)
   {
        printf("\n");
   }
   else
   {
       puts("\nMatrix can't multiply.");
       exit(0);
   }
   // Code for multiplication of matrix.
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           mr[i][j]=0;
           for(k=0;k<r1;k++)
           {
               mr[i][j]=mr[i][j]+m1[i][k]*m2[k][j];
           }
       }
   }
   puts("The multiplication of Matrix is :-");
   printf("\n");
   for(i=0;i<r1;i++)
   {
       for (j=0;j<c2;j++)
       {
           printf("%d\t",mr[i][j]);
       }
       printf("\n");
   }
}