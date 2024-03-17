#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int num,sum=0,cnum,rem;
    system("cls");
    printf("Enter no. = ");
    scanf("%d",&num);
    cnum=num;
    while(num!=0)
    {
      rem=num%10;
      sum=pow(rem,3)+sum;
      num=num/10;
    }
    if (cnum==sum)
    {
      printf("%d is a armstrong number",cnum);
    }
    else
    {
      printf("%d is not a armstrong number",cnum);
    }
}
