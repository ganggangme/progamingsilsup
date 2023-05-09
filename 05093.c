#include <stdio.h>
void print_array(int *, int N);


int main(){
    int a[5];
    int b[3][4];
    int c[2][4][3];
    int i;
    for (int i=0;i<5;i++){
        a[i]= i* i;

    }
    for (i=0;i<12;i++){
        b[i/4][i%4]=i;
    }
    for (i=0;i<24;i++){
        int *p = (int *) c;
        p[i]=i;
    }

    print_array(a, 5);
    print_array(b[0], 4);

    print_array((int *) b, 12);
    print_array((int *) c, 24);


    return 0;
}

void print_array(int *a, int N){
    printf("[");
    for (int i = 0; i<N; i++){
        printf("%d,", a[i]);
    }
    printf("]");
}