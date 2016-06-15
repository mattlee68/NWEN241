#include <stdio.h>

int main(void){
    int m[4][4] = {{1,3,5,7},{11,33,55,77},{2,4,6,8},{22,44,66,88}};
    int (*parr)[4] = m;
    printf("%d ", **m);
    printf("%d ", *(*m+2));
    printf("%d ", *(m[1]+2));
    printf("%d ", (*(parr+3))[2]);
}
