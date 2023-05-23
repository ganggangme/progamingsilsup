#include <stdio.h>

int main(){
    char name[20];
    char addr[20];

    printf("이름을 입력하시오");
    fgets(name, 20, stdin); // stdin은 키보드를 의미함(버퍼)
    printf("주소를 입력하시오");
    fgets(addr, 20, stdin);

    printf("이름: %s\n", name);
    printf("주소: %s\n", addr);
    
}