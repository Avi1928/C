#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,count=0,sum=0;
    system("cls");
    printf("Enter no. =");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;
        count=count+1 ;
        //sum=rem+sum;
        num=num/10;
    }
    printf("%d",count);
}