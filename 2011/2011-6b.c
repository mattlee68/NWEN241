#include <stdio.h>

void bitwise_swap(int *, int *);

int main(void){
    int a = 42;
    int b = 2;
    bitwise_swap(&a, &b);
    printf("%d %d", a, b);
}

void bitwise_swap(int *a, int *b){
    if(*a != *b){
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}
