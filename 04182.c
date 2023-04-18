#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void){
    double x,y;

    x = M_PI / 3.0;
    y = sin(x); // 함수 호출할 때는 rad로 호출됨
    printf("%lf %lf\n", 180/M_PI*x,y);
    y = cos(x); 
    printf("%lf %lf\n", 180/M_PI*x,y);
    y = tan(x);
    printf("%lf %lf\n", 180/M_PI*x,y);

    x= 2.3;
    printf("%f, %f\n", floor(x), ceil(x)); //floor 내림함수 ceil 올림함수
    x= -2.3;
    printf("%f, %f\n", floor(x), ceil(x)); 
    return 0;
}