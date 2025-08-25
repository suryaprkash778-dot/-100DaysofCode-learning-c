//Q5Writea program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    float c,f;
    printf("what's the temperature in degree celsius\n");
    scanf("%f",&c);
    f = (c*9/5) +32;
    printf("your temperature in degree farahneit is %.2f",f);
    return 0;

}