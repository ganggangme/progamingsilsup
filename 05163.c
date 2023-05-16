#include <stdio.h>

int main(){
    int data = 0x01020304;
    char *p = (char *) &data;
    for (int i=0; i<4; i++){
        printf("%d : %02x\n", i, *(p+i));
    } //가장 위쪽에 있는 바이트가 가장 아래에 저장되는 경우: little endian (인텔 계열의 cpu에서 사용)
    // 다른 cpu의 경우: big endian
}