#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[50][50];
    int nr,nc,i,j,sum=0;
    system("cls");
    printf("Enter the no of row = ");
    scanf("%d",&nr);
    printf("Enter the no of column = ");
    scanf("%d",&nc);
    printf("Enter the array elements.\n");
    for(i=0;i<nr;i= i+1)
    {
        for(j=0;j<nc;j=j+1)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    puts("The array are :-");
   for(i=0;i<nr;i= i+1)
    {
        for(j=0;j<nc;j=j+1)
        {
            printf("%d ",arr[i][j]);
        }
    }
    puts("\nThe sum of array elements are:-");
    for(i=0;i<nr;i= i+1)
    {
        for(j=0;j<nc;j=j+1)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}

