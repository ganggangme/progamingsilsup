#include <stdio.h>

int main(){
    char code = 'A';
    float x = 1.234567890123456789;
    double y = 1.234567890123456789;

    printf("%c, %d", code, code);
    printf("x: %.20f", x);
    printf("y: %.20f", y);
    printf("%.20f", 1.0/4.8*4.9);
}