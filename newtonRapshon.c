#include<stdio.h>
//#include<conio.h>
#include<math.h>
#define f(x) (x*x)-25

int main()
{printf("using Newton Raphson method\n");
        float er,x1,x0,f0,fd0,e;
        int step=1;

        printf("enter initial input\n");
        scanf("%f",&x0);
        er=0.0001;
        f0=f(x0);

        printf("step\tx0\tx1\tf0\tfd0\ter\n");
        do{
                fd0=2*x0;
                x1=x0-(f0/fd0);
                e=fabs((x1-x0)/x1);
        printf("%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n",step,x0,x1,f0,fd0,e);
                x0=x1;
                f0=f(x1);
        step++;
        }while(e>er);
        printf("root is %.4f",x1);
return 0;
}