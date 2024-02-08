//posative negative using ternary 4//
#include<stdio.h>
#include<conio.h>

int main()
{
   int n=0,fact=1,temp=0;
    
   printf("\nenter any number to chake it is factorial=");
   scanf("%d",&n);
    
    temp=n;
    
   if(n<=0)
   {
     printf("\n invalid input.");
     return -1;
   
   }
   while(temp>1)
   {
     fact=fact*temp;
     temp--;
   }
   printf("\n factorial of %d is %d",n,fact);
   getch();
   return 0;
}