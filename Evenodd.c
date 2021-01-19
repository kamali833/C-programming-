#include<stdio.h>
#include<conio.h>
int main()
{   
    int num[100],i,size;
    printf("Enter the size of numers:");
    scanf("%d",&size);
    printf("Enter the number:");
    for(i=0;i<size;i++)
    scanf("%d",&num[i]);
    
    for(i=0;i<size;i++)
    { 
        if(num[i]%2==0)
        { 
           printf(" Even numbers are: %d\n", num[i]);
        }
    
    }
    for(i=0;i<size;i++)
    {
     
        if(num[i]%2!=0)
        {
           printf(" odd numbers are: %d\n", num[i]);

        }
    }
    
    
}
