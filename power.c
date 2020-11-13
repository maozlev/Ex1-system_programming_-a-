#include "myMath.h"

double Power(double x, int y){
    double sum=1;
    double t=x;
    int y1=y;
    if(y<0){
        y1=-y;
        while (y1>0){
        sum=sum*t;
        y1--;
        }
        return div(1,sum);
    }
    while (y>0){
        sum=sum*t;
        y--;
    }
        return sum;
}

#define exp 2.718281828
double Exponent(int x){
    return Power(exp,x);
}

