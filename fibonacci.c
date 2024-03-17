#include<stdio.h>
#include<conio.h>
void main()
{
    int num1=0,num2=1,num3,n,i;
    system("cls");
    printf("Enter no. from there you want to print fibonacci series =");
    scanf("%d",&n);
    printf("%d , %d",num1,num2);
    //num3=num1+num2;
    for (i=3; i<=n ;i=i+1)
    {
         num3=num1+num2;
       
       num1=num2;
       num2=num3;
       printf(", %d ",num3);
      // num3=num2+num1;
    }
}