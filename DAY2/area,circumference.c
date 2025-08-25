//Q4Writea program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
{
    float pi,radius,area,circumference;
    printf("What is the radius of circle\n");
    scanf("%f",&radius);
    pi = 3.14;
    area = pi*radius*radius;
    circumference = 2*pi*radius;
    printf("circumference of circle is %f\n",circumference);
    printf("area of circle is %f\n",area);
    return 0;

}

