#include <stdio.h>

int main(){
    char str[4] = "abz";
    char *ptr = "def";

    str[0]='0';
    printf("%s\n", str);
    //ptr[0] = '0'; 수정이 불가능함
    printf("%s\n", ptr); 
}