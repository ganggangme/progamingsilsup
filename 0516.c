#include <stdio.h>


int main(){
    char c = 60;
    double x = 3.1;
    int y = 100;

    char *pc = &c;
    double *pd = &x;
    int *pi = &y;

    printf("c의 주소는 %u\n", &c); //10진수 로 출력
    printf("x의 주소는 %p, %p, %p\n", &c, pc, ++pc); //16진수
    printf("x의 주소는 %p, %p, %p\n", &x, pd, ++pi); // 지역변수와 전역변수는 완전히 다른 위치에 있음
    printf("y의 주소는 %p, %p, %p\n", &y, pi, ++pi); //

    printf("%d, %d, %d\n", sizeof pc, sizeof pd, sizeof pi);
    printf("%d, %p, %d, %p", y, &y, *pi, pi); //*pi는 그 주소에 있는 값을 의미함
}