#include <stdio.h>

int main (){
    int n;
    char grade;

    printf("점수를 입력");
    scanf("%lf", &n);

    if (n>=90)
        grade = 'A';
    else if (n >= 80)
        grade = 'B';
    else if (n >=70)
        grade = 'C';

}