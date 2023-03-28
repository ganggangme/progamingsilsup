#include <stdio.h>
// 비트연산
int main(){
    unsigned char x, mask;

    printf("숫자를 입력하시오 (0~255)");
    scanf("%d", &x);

    mask = 0x80;
    for(int i=0; i < 8; i++){
        x & mask ? printf("1") : printf("0");
        mask >>= 1;
    }

    return 0;

}