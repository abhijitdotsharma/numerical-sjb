#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float x, sum = 0.0, product = 0;
    printf("enter the no of term in the series\n");
    scanf("%d", &n);
    printf("enter ist term \n");
    scanf("%f", &x);
    float term = x;
    sum = x;
    for (i = 1; i < n; i++)
    {
        product = ((-1) * (x * i)) / (i + 1);
        term = product * term;
        sum = sum + term;
    }
    printf("sum of series is %f", sum);
    return 0;
}