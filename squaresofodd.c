//program to calculate the sum of squares of first n odd numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>
void oddPrint(int);
void main()
{
    int n;
    printf("enter the no. uptil where u want the sum of square of odd natural no.");
    scanf("%d",&n);
    oddPrint(n);
}
void oddPrint(int n)
{
    int i=1;float s,sum=0;
    while(i<=n)
    {
        if (i%2!=0)
        {
            s=pow(i,2);
            sum=sum+s;
            printf("\n no. is %d and its square is %f",i,s);
        }
        i++;

    }
    printf("the sum of the squares of odd numbers is %f",sum);
}
