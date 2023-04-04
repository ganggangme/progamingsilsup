#include <stdio.h>

int main(){
    int n;

    printf("정수를 입력: ");
    scanf("%d", &n);

    if (n % 2 ==0)
        printf("%d는 짝수입니다.", n);
    else
        printf("%d는 홀수입니다.", n);

    return 0;
}




