#include <stdio.h>

int main(){
    char str[4];
    int i = 0;
    str[0] = 'a';// \0이 없음
    str[1] = 'b';
    str[2] = 'z';
    str[3] = '\0'; // 문자열의 끝을 알려줌
    while(str[i]!='\0'){ // '/0'대신에 0 표기도 가능
        printf("%c", str[i++]);
    };
}