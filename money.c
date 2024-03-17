#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int  amount,left_money,note_1,note_2,note_5,note_10,note_20,note_50,note_100,note_500,note_2000,total;
    printf("Enter the amount = ");
    scanf("%d",&amount);
    note_2000 =  (amount/2000);
    left_money = (amount%2000);
    note_500  =  (left_money/500);
    left_money = (left_money%500);
    note_100  =  (left_money/100);
    left_money = (left_money%100);
    note_50  =   (left_money/50);
    left_money = (left_money%50);
    note_20  =   (left_money/20);
    left_money = (left_money%20);
    note_10  =   (left_money/10);
    left_money = (left_money%10);
    note_5  =    (left_money/5);
    left_money = (left_money%5);
    note_2  =    (left_money/2);
    left_money = (left_money%2);
    note_1  =    (left_money/1);

    printf("Total no. of reqired notes are\n");
    printf("2000 Rs = %d notes\n",note_2000);
    printf("500 Rs = %d notes\n",note_500);
    printf("100 Rs = %d notes\n",note_100);
    printf("50 Rs = %d notes\n",note_50);
    printf("20 Rs = %d notes\n",note_20);
    printf("10 Rs = %d notes\n",note_10);
    printf("5 Rs = %d notes\n",note_5);
    printf("2 Rs = %d notes\n",note_2);
    printf("1 Rs = %d notes\n",note_1);
    total = 2000*note_2000 + 500*note_500 + 100*note_100 + 50*note_50 + 20*note_20 + 10*note_10 + 5*note_5 + 2*note_2 + 1*note_1 ;
    printf("\nThe total amount is = %d",total);
    getch();
}