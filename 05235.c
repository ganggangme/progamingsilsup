#include <stdio.h>
#include <string.h> //문자열 관련된 처리 함수 라이브러리

int main(){
    char str[100];
    char seps[] = " ,\t\n"; // \t는 tab
    char *tk;
    int i = 0;

    strcpy(str, "a bb ccc");
    printf("%s\n", str);
    strcat(str, " dddd eeeee"); 
    printf("%s\n", str);

    fgets(str, 100, stdin);
    printf("%s\n", str);
    tk = strtok(str, seps);
    while (tk != NULL){
        printf("[%d] %s\n", i++, tk);
        tk = strtok(NULL, seps);
    }
}