#include <stdio.h>

int main(){
    int x = -3;
    int y = 010;
    int z = 0x10;
    int i = 0;
    int m = 8;

    printf("x: %d y: %o z: %8x", x, y, x);

    for (i = 0; i<m; i++){
        printf("%d",(x >> m-1-i) & 0x01);
    }
    return 0;
}