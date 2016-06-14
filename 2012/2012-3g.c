#include <stdio.h>

typedef struct{
    int i;
    float f;
}int_float;

int_float multiply(int_float, int_float);

int main(void){
    int_float a,b,c;
    a.i = 2;
    b.i = 4;
    a.f = 5.6f;
    b.f = 2.1f;
    c = multiply(a,b);
    printf("%d, %f", c.i, c.f);
    return 0;
}

int_float multiply(int_float a, int_float b){
    int_float c;
    c.i = a.i * b.i;
    c.f = a.f * b.f;
    return c;
}


