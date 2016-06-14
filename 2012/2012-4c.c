#include <stdio.h>

void func(int **p);

int main(void){
    int *p;
    func(&p);
    printf("%p", p);
}

void func(int **p){
    *p = NULL;
}
