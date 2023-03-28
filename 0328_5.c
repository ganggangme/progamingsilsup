/*
365.2422일
*/
#include <stdio.h>

int main(){
    int year, leap;
    printf("연도를 입력하시오");
    scanf("%d", &year);

    leap = (year % 4 == 0) && (year % 100 != 0) || (year % 200 == 0);
    leap ? printf("%d년은 윤년입니다\n", year) : printf("%d년은 윤년이 아닙니다\n", year) ;

}
