#include<stdio.h>
#include<conio.h>
struct student
{
    char name[50];
    int rollno;
    int age;
    char address[50];
    char email[50];
};
void main()
{
    struct student s[50];
    int i,n;
    system("cls");
    printf("Enter the no. of student record = ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the record of student %d\n",i);
        puts("Enter name of student.");
        scanf("%s",&s[i].name);
        puts("Enter roll no. of student.");
        scanf("%d",&s[i].rollno);
        puts("Enter age of student.");
        scanf("%d",&s[i].age);
        puts("Enter E-mail of student.");
        scanf("%d",&s[i].email);
        puts("Enter address of student.");
        fflush(stdin);
        gets(s[i].address);
        printf("\n");
    }
    printf("---------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("The record of student %d\n",i);
        printf("\n");
        printf("The name of student is = ");
        printf("%s\n",s[i].name);
        printf("The roll no. of student is = ");
        printf("%d\n",s[i].rollno);
        printf("The age of student is = ");
        printf("%d\n",s[i].age);
        printf("The E-mail of student is = ");
        printf("%d\n",s[i].email);
        printf("The address of student is = ");
        puts(s[i].address);
        printf("\n");
        printf("---------------------------------------------\n");
    }
    

}