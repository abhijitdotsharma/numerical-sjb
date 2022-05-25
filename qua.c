#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, dis, root1, root2;
    printf("enter the value of a,b,c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    dis = b * b - 4 * a * c;
    if (dis > 0)
    {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("roots are %lf and %lf", root1, root2);
    }

    else if (dis == 0)
    {
        root1 = -b / (2 * a);
        printf("roots are equal having value %lf", root1);
    }

    else
    {
        printf("roots are imaginary");
    }
}