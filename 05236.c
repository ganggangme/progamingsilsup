#include <stdio.h>

int main(){
    char a[3][6] = {"a", "bb", "ccc"};
    char *p[3] = {"a", "bb", "ccc"};

    for (int i = 0; i<3; i++){
        printf("%p : %s\n", a[i], a[i]);
    }
    for (int i = 0; i<3; i++){
        printf("%p : %s\n", p[i], p[i]);
    }
}