#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    system("cls");
    printf("Enter a Alphabet = ");
    scanf("%c",&c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            printf("%c is Vowel",c);
        }
        else
            { 
            printf("Given Alphabet is Consonent.");
            }
        
}