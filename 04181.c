#include <stdio.h>

int get_int(void); //함수 형식을 선언한다
int factorial(int);
int combination(int n, int r);

int main(){
    
    int n, r;
    n = get_int();
    r = get_int();
    printf("C(%d,%d) = %d\n", n, r, combination(n, r));


    return 0;
}

int get_int(){

    int val;
    printf("정수를 입력하시오");
    scanf("%d", &val);
    return val;
}

int factorial(int num){
    int res = 1;

    for(int i= 0; i<num; i++){
        res *= num - i;
    }

    return res;
}

int combination(int n, int r){
    int res = 1;

    for (int i =0; i<r; i++){
        res *= n-i;//순열
    }
    res /=factorial(r); //조합
    return res;
}

// 수학 함수
// 올림/내림<< 뭔지 확인하기!!