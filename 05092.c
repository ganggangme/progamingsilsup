#include <stdio.h>
void print_array(int *a, int N);
//전역변수는 초기화시키지 않아도 자동으로 0으로 초기화된다

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3};
    int c[] = {6,5,3,4,2,2};
    int d[5] ; //초기화시키지 않은 경우
    int f[3][4]= {{1,2,3},{3}}; //초기화시키지 않은 위치는 모두 0으로 채워진다

    printf("a=");
    print_array(a,5);

    printf("b=");
    print_array(b,5);

    printf("c=");
    print_array(c,6);

    printf("d=");
    print_array(d,5);

    printf("f=");
    print_array((int *)f,12);

    return 0;
}

void print_array(int *a, int N){
    printf("[");
    for (int i = 0; i<N; i++){
        printf("%d,", a[i]);
    }
}