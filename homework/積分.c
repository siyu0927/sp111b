#include <stdio.h>

double integrate(double (*f) (double),double a,double b) {
    double area=0.0; //總面積
    double x=a;//可以直接寫在for裡
    for(x;x<b;x=x+0.001) //x+=0.001
    {
        area=area+f(x)*0.001; //area+=f(x)*0.001
    }
    return area;
}

double square(double x) { //平方用函式
    return x*x;
}

int main() {
    printf("integrate(square, 0.0, 2.0)=%f\n", integrate(square, 0.0, 2.0));//0~2的積分
}
