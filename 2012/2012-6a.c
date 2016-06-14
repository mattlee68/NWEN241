#include <stdio.h>

int main(void){
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    unsigned int mask = 1 << 31;
    int i;
    for(i = 0; i < 32; i++){
        if(i%8 == 0 && i != 0){printf(" ");}
        printf("%d", ((mask&num) == 0) ? 0: 1);
        mask >>= 1;
    }
    printf("\n");
    return 0;
}
