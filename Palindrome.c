
   #include<stdio.h>
int main()
{
	
      int num,r,rev=0,temp;
       
       printf("Enter the number\n");
       
       scanf("%d",&num);
       
        temp=num;	


  while(num)
  
  {
  
      r=num%10;
      rev=rev*10+r;
      num=num/10;
      
}
     
     if(temp==rev)
    {
     
        printf("yes, this is a palindrome.");
       
    }
     
        else
        
        {
        
        printf("no, this is not a palindrome.");	
     	
    }
     return 0;
     
}  
