#include <stdio.h>
#include <complex.h>

int main(){
    double a, b, c; 
    complex double d, x1, x2;

    printf("이차 방정식의 계수 a, b, c를 입력");
    scanf("%lf %lf %lf", &a, &b, &c);
    // 복소수 print문으로 표현 예시
    // d = 2 - 1.5*I;
    // printf("실수부=%f, 허수부=%f\n", creal(d), cimag(d));
    if (a!=0){ //2차방정식
        d = csqrt(b*b-4.0*a*c);
        x1 = (-b+d)/(2*a);
        x2 = (-b-d)/(2*a);

        printf("x1= %f %+fj, x2= %f %+fj", creal(x1), cimag(d), creal(x2), cimag(x2));

    }
    else {
        if (b!=0){ //1차방정식
           x1 = -c/b;
           printf("x=%f\n", creal(x1));
           }
        else
            printf("근이 무수히 많다");
        

    }
    }