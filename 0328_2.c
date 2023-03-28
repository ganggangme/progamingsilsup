#include <stdio.h>

int main(){
    int x, y;
    y = 10 + (x = 3+ 5);
    printf("%d, %d\n", x, y);

    x=y=10;
    printf("%d, %d\n", x, y);

    scanf("%d %d", &x, &y);
    printf("%d != %d => %d\n", x, y, x!=y);

    return 0;
}