#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = (b * b) - 4 * a * c;
    int x1, x2;
    if (d == 0)
    {
        x1 = -(b / 2 * a);
        x2 = -(b / 2 * a);
        printf("roots are eual: %d %d\n", x1, x2);
    }
    else if (d > 0)
    {
        x1 = (-b + sqrt(double(d))) / 2 * a;
        x2 = (-b - sqrt(double(d))) / 2 * a;
        printf("roots are distinct: %d %d\n", x1, x2);
    }
    else
    {
        printf("imaginary roots");
    }
    return 0;
}