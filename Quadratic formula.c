#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double x1, x2; 

    a = 1;
    b = 5;
    c = 2;

    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    printf("x1 : %lf\n", x1);
    printf("x2 : %lf\n", x2);

    return 0;
}
