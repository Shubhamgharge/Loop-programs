///reverce unknown table by for
#include<stdio.h>
#include<conio.h>

int main()
{
   int n,i;
    
   printf("enter any number to print reverce table=");
   scanf("%d",&n);
   
   for(i=10; i>=1 ; i--)
   {
      printf("\n %d",n*i);
   }
   
   

   getch();
   return 0;
}