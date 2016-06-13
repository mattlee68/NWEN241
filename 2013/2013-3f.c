#include <stdio.h>

#define mPchar char *
typedef char *tPchar;

int main(void){
    mPchar ma, mb;
    tPchar ta, tb;

    printf("%d ", sizeof(ma));
    printf("%d ", sizeof(ta));
    printf("%d ", sizeof(mb));
    printf("%d ", sizeof(tb));
}
