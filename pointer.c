#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={10,20,30,40,50};
    int i,n,*p;
    p=&arr;
    system("cls");
    printf("%d\n",arr);
    for ( i = 0; i < 5; i++)
     {
         printf("%d\n",*p);
         p++;
     }
}