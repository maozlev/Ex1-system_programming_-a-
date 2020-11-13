#include <stdio.h>
#include "myMath.h"

int main() {
    double x;
    printf("\n Please insert a real number: ");
    scanf("%lf", &x);
    int y=(int)x;
    double p1= Exponent(y)+Power(x,3)-2;
    double p2= mul(x,3)+mul(Power(x,2),2);
    double p3= div(mul(Power(x,3),4),5)-mul(x,2);
    printf("\nThe value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %0.4lf ",x);
    printf("is: %0.4lf ", p1);
    printf("\nThe value of f(x) = 3x + 2X^2 at the point %0.4lf ",x);
    printf("is: %0.4lf ", p2);
    printf("\nThe value of f(𝑥) = (4x^3)/5 -2x at the point %0.4lf ",x);
    printf("is: %0.4lf \n", p3);

return 0;
}