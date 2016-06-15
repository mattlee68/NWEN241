#include <stdio.h>

int main(void){
    char *pa[] = {"12", "34", "56"};
    int m[2][3] = {{1,2,3}, {4,5,6}};
    int (*ppm)[2][3] = &m;

    printf("%d ", sizeof(pa));
    printf("%d ", sizeof(**pa));
    printf("%d ", sizeof(ppm));
    printf("%d ", sizeof(**ppm));
}
