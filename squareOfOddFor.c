//to print sum of square of first n odd numbers
#include<stdio.h>
#include<conio.h>
void printOdd(int);
void main()
{
    int n;
    printf("enter the no.until which you want to find the sum of square of odd nos.\n");
    scanf("%d",&n);
    printOdd(n);
    getch();
}
void printOdd(int n)
{
    int r,s=0;
    printf("odd no.and their squares are");
    for(int i=1;i<=n;i++)
    {
        if (i%2>0)
        {
            r=i*i;
            printf("\n %d %d",i ,r);
            s=s+r;
        }
    }
    printf("\n sum of square of odd nos is=%d",s);
}
