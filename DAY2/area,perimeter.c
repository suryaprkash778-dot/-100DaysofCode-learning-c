//Q3Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("What is the length of rectangle\n");
    scanf("%d",&length);
    printf("what is the breadth of rectangle\n");
    scanf("%d",&breadth);
    area = length*breadth;
    perimeter = 2*length+2*breadth;
    printf("perimeter of rectangle is %d\n",perimeter);
    printf("area of rectangle is %d\n",area);
    return 0;

}

