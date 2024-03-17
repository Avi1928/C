#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[50];
    int i,n,sum=0;
    system("cls");
    printf("Enter the length of array = ");
    scanf("%d",&n);
    printf("Enter the array elements.\n");
    for(i=0;i<n;i= i+1)
    {
        scanf("%d",&arr[i]);
    }
    puts("The array are :-");
    for(i=0;i<n;i=i+1)
    {
        printf("%d ",arr[i]);
    }
    puts("\nThe sum of array elements are:-");
    for(i=0;i<n;i= i+1)
    {
        sum=arr[i]+sum;
    }
    printf("%d",sum);
}

