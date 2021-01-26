#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
      int i=0,j=0,k=0;
      char str1[100],str2[100],str3[100];
      printf("Enter the string:\n");
      gets(str1);
      printf("Enter the string2:\n");
      gets(str2);
      
     
     while(str1[i]!='\0'&& str2[j]!='\0')
      
      {
               if(str1[i]<=str2[j])
                  
	              {  
	                   str3[k]=str1[i];
	                   i++;
		      } 
		           
		           
	      else
             {
		           	
		          str3[k]=str2[j];
		           j++;
		           	
	     }     	
             k++;
      }
	           
       while(str1[i]!='\0')
       {
       	
               str3[k]=str1[i];
          	i++;
          	k++;
      }	           
	           
      while(str2[j]!='\0')
      {
          	str3[k]=str2[j];
      	        j++;
      	        k++;
      }	
      	
      str3[k]='\0';
      
      
      puts(str3);
        
        
  }
