#include <stdio.h>

int main(){
    int x;
    while((x = getchar()) !=EOF){ //getchar: 버퍼 형식으로 받아들이는 것 (표준 라이브러리(stdio.h)에 있음), EOF(값:-1): 값이 마지막 문자가 아니면 빠져나오지 않음
        putchar(x);
    }
    printf("EOF = %d\n", x); //ctrl D 또는 Ctrl Z를 입력해서 빠져나올 수 있다 (이게 EOF)
}
