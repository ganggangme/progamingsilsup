#include <stdio.h>

int main(){
    int a[] = {1,2,3};

    printf("%p, %p, %p\n", &a[0],&a[1],&a[2]);
    printf("%p, %p, %p\n", a, a+1, a+2);
    printf("%d, %d, %d\n %d, %d, %d\n", a[0], a[1], a[2], *a, *(a+1), *(a+2));

    int *p = a;
    printf("%d, %d, %d\n %d, %d, %d\n", *p, *(p+1), *(p+2), p[0], p[1], p[2]);
}