#include <stdio.h>
#include <limits.h>

int main(){
    short s = SHRT_MAX;
    unsigned short u = USHRT_MAX;

    printf("%d, %d\n", s, u);
    return 0;
}