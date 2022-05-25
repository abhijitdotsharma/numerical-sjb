#include <stdio.h>
//#include<conio.h>
#include <math.h>
#define f(x) (x * x) - 25

int main()
{
    printf("using bisection method\n");
    float er, x1, x2, x0, f0, f1, f2;
    int step = 1;
    er = 0.0001;
up:
    printf("enter two input\n");
    scanf("%f%f", &x0, &x1);
    //      printf("\nerror tolerrence\n");
    //      scanf("%f",&er);
    f0 = f(x0);
    f1 = f(x1);

    if ((f0 * f1) > 0.0)
    {
        printf("not suitable roots\n");
        goto up;
    }
    x2 = (x1 + x0) / 2;
    f2 = f(x2);
    printf("step\tx0\tx1\tx2\tf(x2)\ter\n");
    do
    {

        x2 = (x1 + x0) / 2;
        f2 = f(x2);

        printf("%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n", step, x0, x1, x2, f2, er);
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
    } while (fabs(f2) > er);
    printf("root is %.4f", x2);
    return 0;
}