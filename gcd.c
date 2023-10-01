#include <stdio.h>

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main(int argc, char const *argv[])
{
    int a,b;
    printf("\nenter the first number = ");
    scanf("%d",&a);
    printf("\nenter the second number = ");
    scanf("%d",&b);
    printf("\nthe gcd = %d", gcd(a,b));
    return 0;
}
