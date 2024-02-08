//posative negative using ternary 4//
#include<stdio.h>
#include<conio.h>

int main()
{
   int n=0,fact=0,temp=0,i;
    
   printf("\nenter any number to chake it is factorial=");
   scanf("%d",&n);
   
   if(n<=0)
   {
     printf("\n invalid input.");
     return -1;
   
   }
   for(fact=1 , temp=n ; temp>1 ; temp--)
   {
     fact=fact*temp;
   }
   printf("\n factorial of %d is %d",n,fact);
   getch();
   return 0;
}