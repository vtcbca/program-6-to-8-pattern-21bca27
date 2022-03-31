/* WAP to print following pattern */
#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n,i,j,l; 
    printf("\n Enter the No:"); 
    scanf("%d",&n); 
    for(i=1;i<=n;i++) 
    { 
        for(j=n;j>=i;j--) 
        { 
            printf("  "); 
        }
        for(l=i;l>=1;l--) 
        { 
            printf(" %d",l); 
        } 
        for(l=2;l<=i;l++) 
        { 
            printf(" %d",l); 
        } 
        printf("\n"); 
    } 
    getch();
}


    


    