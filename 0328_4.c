#include <stdio.h>

int main(){
    int x, y;
    //short -circuit evalutaion 
    x=1;
    y=0 && (x=2);
    printf("%d,%d\n",x,y);

    x=1||(y=2);
    printf("%d,%d\n",x,y);

    return 0;
}