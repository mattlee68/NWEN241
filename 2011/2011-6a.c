#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    unsigned int m = 1 << 31;
    int i;
    for(i = 0; i < 32; i++){
        if(i % 8 == 0 && i != 0){
            printf(" ");
        }
        printf("%d", ((n&m) != 0) ? 1 : 0);
        m >>= 1;
    }
    printf("\n");
    return 0;
}
