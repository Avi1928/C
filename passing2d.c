#include<stdio.h>
#include<conio.h>
void fun(int*p,int x)
{
    int i=0;
    for(i=0;i<x;i++)
    {
        printf("%d",*p);
        p++;
    }
}
void main()
{
    int a[3][3] ={1,2,3,4,5,6,7,8,9};
    system("cls");
    fun(a,9);
}
