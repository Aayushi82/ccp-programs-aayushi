//program to convert degree fahrenheit to celcius
#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("enter degree in fahrenheit");
    scanf("%f",&f);
    c=(f-32)*5.0/9.0;
    printf("degree in celcius=%f",c);
    getch();
    return 0;
}
