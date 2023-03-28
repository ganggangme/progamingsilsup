#include <stdio.h>

int main(){
    double x, y;
    scanf("%lf", &x);
    y =x +1;
    printf("%d, %f\n", x==y,x-y);
     printf("%d, %d\n", 1||-1 && 0, (1 ||-1) && 0); //연산순서에 대한 얘기 &&가 먼저다 ||가 or연산

    return 0;
}