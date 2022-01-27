/* write a program to print pattern for inputted number of line*/


#include <stdio.h>
#include <conio.h>
void main() 
{
       int i,j,l;
       printf("Enter the number of l: ");
       scanf("%d",&l);
       for (i=1;i <=l;i++) 
       {
          for (j=1;j <= i;j++) 
          {
             printf("* ");
          }
          printf("\n");
       }
   getch();
}




    