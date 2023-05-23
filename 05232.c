#include <stdio.h>

int main(){
    char src[] = "programming language";
    char dst[50];
    int i = 0;

    for (i=0;src[i] != '\0'; i++){
        dst[i] = src[i];
    } 
    dst[i] = '\0';

    printf("%d, %s", i, dst); // \0 빼고 찍어줌
}