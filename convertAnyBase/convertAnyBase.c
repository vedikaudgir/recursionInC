//Program to convert a number from decimal base to any base.
//Author - Vedika Udgir

#include <stdio.h>

void convertBinary(int n, int base)
{
    if (n != 0)
    {
        convertBinary(n / base, base);
        printf("%d", n % base);
    }
}

void main()
{
    int n, base;

    printf("Enter any number and base.");
    scanf("%d%d",&n,&base);

    convertBinary(n, base);
}