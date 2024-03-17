#include<stdio.h>
#include<conio.h>
void main()
{
    int long no, i,c=0;
    system("cls");
    printf("Enter a number = ");
    scanf("%d",&no);
    while(no!=0)
    {
        no=no/10;
        c++;
    }
    printf("%d",c);

}