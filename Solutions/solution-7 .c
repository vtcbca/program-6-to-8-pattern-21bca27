/* write a program to print Reverse Triangle */

#include<stdio.h>
#include<conio.h>
void main()
{

    int i, j, rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) 
    {    

        for (j = 0; j < i; j++) 
        {
            printf(" ");
        }
        for (j = 0;j < 2*(rows-i)-1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    getch();

}



    