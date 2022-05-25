#include <stdio.h>
int main()
{
    int i, n;
    float s, x, term;
    printf("enter the value of x:");
    scanf("%f", &x);
    printf("enter the value of n:");
    scanf("%d", &n);
    x = x * 3.14159 / 180;
    s = 1;
    term = 1;
    for (i = 1; i <= n; i++)
    {
        term = (term * (-1) * x * x) / ((2 * i) * (2 * i) - 1);
        s = s + term;
    }
    printf("value of %f", s);
}