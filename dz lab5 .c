#include <stdio.h>
#include <math.h>
#define d 1.0
double x, y, F;
int main()
{
    printf("Введите x и y: ");
    scanf("%lf %lf", &x, &y);
    F = (pow(cos(y), 2) + 2.4 * d) / (exp(y) + log(pow(sin(x), 2) + 6));
    printf("При x = %g и y = %g значение F = %.6f\n", x, y, F);
    return 0;
}
