#include <stdio.h>

int main(void){
    int a[3] = {11,22,33};
    int *pa = a;

    printf("%d ", *a);
    printf("%d ", *(a+2));
    printf("%d ", *pa);
    printf("%d ", pa[1]);
}
