//to print even no.between m to n
#include<stdio.h>
#include<conio.h>
void printEven(int,int);
void main()
{
    int m,n;
    printf("enter the nos.between which you want to print the even nos.\n");
    scanf("%d %d",&m,&n);
    printEven(m,n);
    getch();
}
void printEven(int m,int n)
{
    while (m<=n)
    {
        if (m%2==0)
        {
            printf("\n %d",m);
        }
        m++;
    }
}
