#include <stdio.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(){
    struct student s1 = {2020001, "kim", 4.3};
    struct student s2 = {2022012, "park", 3.3};
    struct student *p;

    

    p = &s2;
    printf("%d\n", s2.number);
    printf("%d\n", (*p).number); 
    printf("%d\n", p->number); //이렇게 자주 씀 포인터가 지시하는 구조체의 개별변수
}