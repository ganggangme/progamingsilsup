#include <stdio.h>


int main(){
    enum colors{RED=-2, GREEN=-1, BLUE}; //세가지 값 중에 하나를 가질 수 있는 정수형 변수, 값 지정하면 순서대로 증가함(예. 100 지정, 그다음 101)

    enum colors cc;
    scanf("%d", &cc);

    switch (cc){
        case RED:
        printf("%d: RED\n", cc);
        break;
        case GREEN:
        printf("%d: GREEN\n", cc);
        break;
        case BLUE:
        printf("%d: BLUE\n", cc);
        break;


    }
}