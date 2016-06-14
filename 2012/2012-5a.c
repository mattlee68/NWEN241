#include <stdio.h>

typedef struct{
    int i;
    char c;
    int ii;
}int_char_int;

typedef struct{
    int i;
    char c;
    char cc;
    int ii;
}int_char_char_int;

int main(void){
    printf("%d ", sizeof(int_char_int));
    printf("%d ", sizeof(int_char_char_int));


    int_char_int a;
    int_char_int *p = &a;

    printf("%d ", p);

    p++;

    printf("%d ", p);
    return 0;
}
