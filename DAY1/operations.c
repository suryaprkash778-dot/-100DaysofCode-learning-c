//Q2Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int num1,num2,sum,pro,sub;
    float div;
    printf("Enter your first number.\n");
    scanf("%d", &num1);
    printf("Enter your second number.\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    pro = num1 * num2;
    div = (float)num1 / num2;
    printf("The sum of %d and %d is: %d\n",num1, num2, sum);
    printf("The subtraction of %d and %d is: %d\n",num1, num2, sub);
    printf("The product of %d and %d is: %d\n",num1, num2, pro);
    printf("The division of %d and %d is: %f\n",num1, num2, div);

    return 0;
}
