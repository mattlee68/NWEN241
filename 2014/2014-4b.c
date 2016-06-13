#include <stdio.h>

void bitwise_swap(int *a, int *b);

int main(void){
    int a = 1;
    int b = 6;
    bitwise_swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}

void bitwise_swap(int *a, int *b){
    if(*a != *b){
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}
