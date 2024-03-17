#include<stdio.h>
void main()
{
   /* char str[]="hello,hii";
    char str1[]={'h','e','l','l','o','\0'};
    char*s ="hello" ;
    printf("%s\n",str);
    int i=0;
    while(str1[i]!='\0')
     {
         printf("%c",str[i]);
         i++;
     }*/
   char name[20][20];
   int no,i;
   system("cls");
   printf("Enter the no. of student :- ");
   scanf("%d",&no);
   puts("Enter the name of students.");
   for(i=0;i<=no;i++)
   {
       gets(&name[i][0]);
       //scanf("%s",&name[i][0]);
   }
   printf("\n");
   printf("The name of students are by using printf \n");
   for(i=0;i<=no;i++)
   {
        printf("%s\n",name[i][0]);
       
   }
   printf("\n");
   printf("The name of students are by using puts\n ");
   // by using puts print the string.
   for(i=0;i<=no;i++)
   puts(&name[i][0]);
}
