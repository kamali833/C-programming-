#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     int i=0, j=0, sum, num=0, num1=0;
    
     char str1[100], str2[100], str3[100];
     printf(" Enter the str1:");
     scanf("%s",str1);
     printf(" Enter the str2:");
     scanf("%s",str2);
     
    while(str1[i]!='\0')
    {
         if(str1[i]>=47 && str1[i]<=58)
        {
        
              num= (num*10)+ (str1[i]-'0');
              i++;
         }
     }
            
            printf(" %d ", num);
    
    
     while (str2[j]!='\0')
     {
         if(str2[j]>=47 && str2[j]<=58)
         {
        
             num1= (num1*10)+ (str2[j]-'0');
             j++;
         }
    
    }
    printf(" %d ", num1);
        
    sum= num + num1;
    
    sprintf(str3,"%d",sum);
    
    printf("total is %s",str3);
        
    
 }
           
