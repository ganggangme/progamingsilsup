#include <stdio.h>

int main(){
    int x;
    float y;
    printf("int = %d bytes\n", sizeof x);
    printf("short = %d\n", sizeof (short));
    printf("long = %d\n", sizeof (long));
    printf("unsigned = %d\n", sizeof (unsigned));
    printf("char = %d\n", sizeof (char));
    printf("float = %d bytes\n", sizeof (y));
    printf("double = %d bytes\n", sizeof (char));



    return 0;
}