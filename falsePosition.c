#include <stdio.h>
//#include<conio.h>
#include <math.h>
#define f(x) (x * x) - 25
// false position method
int main()
{
    printf("using false position method: \n");
    float er, x1, x2, x0, f0, f1, f2;
    int step = 1;
    er = 0.0001;
up:
    printf("enter two input:\n");
    scanf("%f%f", &x0, &x1);

    f0 = f(x0);
    f1 = f(x1);

    if ((f0 * f1) > 0.0)
    {
        printf("not suitable roots\n");
        goto up;
    }
    printf("step\t  x0\t x1\t f0\t  f1\t    x2\t   f2\n");
    do
    {
        x2 = ((x0 * f1) - (x1 * f0)) / (f1 - f0);
        f2 = f(x2);
        printf("%d\t%.4f\t%.4f\t%.4f  %.4f  %.4f  %.4f\n", step, x0, x1, f0, f1, x2, f2);
        if (f1 * f2 < 0)
        {
            x0 = x2;
            f0 = f2;
        }
        else
        {
            x1 = x2;
            f1 = f2;
        }
        step++;
    } while (fabs(f2) >= er);
    printf("root is %.4f", x2);
    return 0;
}