///reverce unknown table by for
#include<stdio.h>
#include<conio.h>

int main()
{
   int n,i;
    
   printf("enter any number to print reverce table=");
   scanf("%d",&n);
   i=10;
   while(i>=1)
   {
     printf("\n %d",i*n);
     i--;
   }
   
   

   getch();
   return 0;
}