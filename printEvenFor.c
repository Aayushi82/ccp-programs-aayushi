//to print even no.from m to n using for loop
#include<stdio.h>
#include<conio.h>
void printEven(int,int);
void main()
{
    int m,n;
    printf("enter the value of 2 nos. between which you want to print the even nos.\n");
    scanf("%d %d",&m,&n);
    printEven(m,n);
    getch();
}
void printEven(int m,int n)
{
    for(int i=m;i<=n;i++)
    {
        if (i%2==0)
        {
            printf("\n %d",i);
        }
    }
}
