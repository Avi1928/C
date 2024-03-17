#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i,j,rem[20];
    printf("Enter the no = ");
    scanf("%d",&no);
    for(i=0;no!=0;i=i+1)
    {
        rem[i]=no%2;
        no=no/2;
    }
    for(j=i-1;j>=0;j=j-1)
    {
        printf("%d",rem[i]);
    }
}