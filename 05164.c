#include <stdio.h>

void sub(const b[], int n);

int main(){
    int a[]= {1,2,3};

    printf("%d, %d, %d\n", a[0], a[1], a[2]);
    sub(a,3);
    printf("%d, %d, %d\n", a[0], a[1], a[2]);


}

void sub(const int b[], int n){ //const: 읽어올 수는 있지만 수정불가능

}