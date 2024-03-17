#include<stdio.h>
#include<conio.h>
void main()
{
    int x,a,b,res,ch;
    lab:
    system("cls");
    printf("Enter first no = ");
    scanf("%d",&a);
    printf("Enter second no = ");
    scanf("%d",&b);
    printf("Press 1 for Addtion\n");
    printf("Press 2 for Substraction\n");
    printf("Press 3 for Multiplication\n");
    scanf("%d",&x);
    switch(x)
      {
          case 1:
                  res=a+b;
                  printf("Sum=%d\n",res);
                  break;
          case 2:
                  res = a-b;
                  printf("Sub=%d\n",res);
                  break;
          case 3:
                  res = a*b;
                  printf("Multi=%d\n",res);
                  break;
          default:
                 printf("Wrong input");
      }
    printf("Want another opration press Y for Yes & N for NO .");
    ch=getche();
    if (ch=='y'||ch=='Y')
        {
            goto lab;
        }
    
}