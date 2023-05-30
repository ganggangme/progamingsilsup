#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point p1, p2, p3;

typedef struct point Point; //data type Point

Point p4, p5;

struct { // circle
    Point c;
    double r;

} cir1, cir2; //실제 사용할 변수

typedef struct{
    Point ll;
    Point ur;
} RECT;

RECT r1, r2;

int main(){


    return 0;
}