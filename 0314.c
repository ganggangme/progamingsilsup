#include <stdio.h>
int main(){
    double usd, rate;
    int krw;
    
    rate =1305.1;
    printf("원화를 입력해주세요:");
    scanf("%d", &krw);

    usd = (double)krw / 1305.1; 
    printf("환전된 금액은 %.2lf", usd);
}