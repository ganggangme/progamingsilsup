#include <stdio.h>

union aa {
    int n;
    double x
};

union bb{
    int m;
    unsigned char b[10];
};

int main(){
    union aa a;
    union bb b;

    printf("%p, %p, %p\n", &a, &a.n, &a.x);
    printf("size = %d\n", sizeof (union aa)); //데이터타입의 경우 괄호써야함
    printf("%p, %p, %p\n", &b, &b.m, b.b); //배열의 경우 & 필요없음
    printf("size = %d\n", sizeof (union bb)); 

    b.m = 0x12345678; // little or big endian
    printf("%x|%x|%x|%x\n", b.b[0], b.b[1], b.b[2], b.b[3]);
    
}