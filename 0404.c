#include <stdio.h>

int main(){
    int price = 10000;
    int age;
    int n;

    printf("나이를 입력하세요");
    scanf("%d", &age);

    if (age <= 18) {
        price = price * 0.8;
        // (double)price =* 0.8;
    }

    printf("가격은 %d입니다\n", price);
    return 0;
}