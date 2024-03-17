#include<stdio.h>
#include<conio.h>
void main()
{
  int j,i;
  system("cls");
  for(i=1;i<=5;i=i+1)
  {
    for( j=1 ; j<=i ; j=j+1 )
    {
      printf("%d",j);
    }
    printf("\n");
  }
}