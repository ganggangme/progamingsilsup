#include <stdio.h>

int main(){
    int user, price, bill, c5, c1;
    printf("물건 가격:");
    scanf("%d",&user);
    printf("낸 돈: ");
    scanf("%d", &price);
    bill = price-user;
    printf("지불할 금액: %d \n", bill);
    c5 = bill / 5000;
    c1 = (bill - (5000 * c5))/1000;
    printf("1000원은 %d장, 5000원은 %d장 ", c1, c5);


    return 0;
}

// 연산자 우선순위 && -> ||

// 비트 연산자  공부하기 
//비트 단위로 &&연산이면 모두 1일 때만 1이고 나머지는 0이 됨
//XOR 연산이면 서로 같으면 0, 서로 다르면 1
//비트가 이동할 때 오른쪽으로 이동하면 가장 앞쪽이 빈다. 가장 앞쪽의 숫자는 그 옆의 숫자를 따라가고, 반대의 경우 무조건 0이 할당된다 (연산자 >>,<<)
//
