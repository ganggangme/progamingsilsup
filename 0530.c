#include <stdio.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(){
    struct student s;

    scanf("%d", &s.number);
    scanf("%s", s.name); //배열의 경우 배열 첫 항목이 주소가 됨 따라서 & 필요없음
    scanf("%lf", &s.grade);

    printf("%d %s %lf\n", s.number, s.name, s.grade);
    return 0;
}