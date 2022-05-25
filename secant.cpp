#include <stdio.h>
//#include<conio.h>
#include <math.h>
#define f(x) (x * x) - 25

int main()
{
    printf("using Secant method\n");
    float x1, x0, x2, f1, f2, f0, er;
    int step = 1;

    printf("enter initial values\n");
    scanf("%f %f", &x0, &x1);

    f0 = f(x0);
    f1 = f(x1);
    printf("step\tx0\tf0\tx1\tf1  \tx2 \tf2\n");
    do
    {
        x2 = ((x0 * f1) - (x1 * f0)) / (f1 - f0);
        f2 = f(x2);
        er = ((x1 - x0) / x1);
        printf("%d\t%.4f\t%.4f\t%.4f\t%.4f %.4f %.4f\n", step, x0, f0, x1, f1, x2, f2);
        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;
        step++;
    } while (fabs(f2) >= er);
    printf("root is %.4f", x2);
    return 0;
}