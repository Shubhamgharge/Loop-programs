//for loop unknown table 
#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,i=0;
    
    printf("enter a number for table");
    scanf("%d",&no);
    
    printf("table of %d is",no);
    
    for(i=1;i<=10;i++)
    {
       printf("\n%d",no*i);
    }
    printf("n thanks");
    getch();
    return 0;
}