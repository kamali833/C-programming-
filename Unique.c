
#include<stdio.h>
#include<string.h>
int main()
{
      int i,j,k,len,count;
      char string[100],unique[100]={0};
      printf("Enter the string:");
      gets(string);
      len=strlen(string);
      k=0;
      
      for(i=0;i<len;i++)
      { 
                
               count=0;
               for(j=0;j<i;j++)
               {
        
                       if(string[i]==unique[j])
                       { 
                             count++;
                       }
               }
        
               if(count==0)
               {
                      unique[k]=string[i];
                      k++;
               }  
}   
        
 
       printf("The unique character in the string:");
        puts(unique);
         

}
