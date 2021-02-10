//to find the area of triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(float,float,float);
int main()
{
    float s1,s2,s3,area1;
    printf("enter the sides of triangle");
    scanf("%f %f %f",&s1,&s2,&s3);
    area1=area(s1,s2,s3);
    printf("area of triangle=%f square units",area1);
    return 0;
}
float area(float a,float b,float c)
{
    float sp,area;
    sp=(a+b+c)/2.0;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    return area;
}
