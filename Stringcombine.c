#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
     char string1[100],string2[100],string3[100],temp[25];
     int i,j,n;
     clrscr();
     printf("Enter string1:");
     scanf("%s",string1);
     printf("Enter string2:");
     scanf("%s",string2);
     strcpy(string3,strcat(string1,string2));
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
       if(strcmp(string3[i],string3[j]>0))
       {
            strcpy(temp,string3[i]);
            strcpy(string3[i],string3[j]);
            strcpy(string3[j],temp);
       }
    }
    }
   printf("The sorted alphabets are:");
   for(i=0;i<strlen(string3);i++)
   {
    printf("%s",string3[i]);
   }
   getch();
   return 0;
}
