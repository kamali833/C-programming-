#include<stdio.h>
#include<string.h>
int main()
  {
  	
   int i,len,count=0;
    char name[100];
    
    printf("Enter the name: ");
    gets(name);
    len=strlen(name);
    
    
       for(i=0;i<len;i++)
    
     {
    
    
    if(name[i]=='A'|| name[i]=='a'|| name[i]=='E'|| name[i]=='e'|| name[i]=='I'|| name[i]=='i'|| name[i]=='O'|| name[i]=='o'|| name[i]=='U'|| name[i]=='u' )
    
{

     count++;
      
      }

}
      printf("Number of vowels in the name: %d",count);
      
      return 0;

   }
