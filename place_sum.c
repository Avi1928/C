#include<stdio.h>
#include<conio.h>
void main()
{
    int no,ones,y,tens,z,hun,sum; 
    printf("Enter a four digit no.=");
    scanf("%d",&no);
    ones=no%10;
    y=no/10;
    tens=y%10;
    z=y/10;
    hun=z%10;
    sum=ones+tens+hun;
    printf("the sum of a four no. is=%d",sum);
    getch();
}