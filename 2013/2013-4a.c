#include <stdio.h>

int main(void){
    int m[4][4] = {{1,3,5,7},{11,33,55,77},{2,4,6,8}, {22,44,66,88}};
    int (*parr)[4] = m;

    int a[3] = {11,22,33};
    int *pa = a;

    printf("%d ", *a);
    printf("%d ", *(a+2));
    printf("%d ", *pa);
    printf("%d ", pa[1]);
    printf("%d ", **m);
    printf("%d ", *(*m+2));
    printf("%d ", *(*(m+1)+1));
    printf("%d ", *(m[1] + 2));
    printf("%d ", (*(m+2))[3]);
    printf("%d ", (*(parr+3))[2]);
}
