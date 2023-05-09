#include <stdio.h>
#define NSIZE 20


int main(){
    int scores[NSIZE][4];
    int N, i;
    double avg;
    for(i=0;i<NSIZE;i++){
        printf("학번, 국 수 영 성적 입력")
        scanf("%d",&scores[i][0])
        if (scores[i][0]<0)
            break;
        scanf("%d %d %d",&scores[i][1],&scores[i][2],&scores[i][3])
    }
    N=i;

    printf("학번:성적 평균\n")
    for (i=0; i<N; i++){
        avg=(scores[i][1]+scores[i][2]+scores[i][3])/3.0;
        printf("%d: %.2f\n", scores[i][0],avg);
    }

    return 0;
}