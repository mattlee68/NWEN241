#include <stdio.h>

int main(void){
    char m[4][6] = {"ABCDE", "FGHIJ", "KLMNO", "PQRST"};
    printf("%c ", **m);
    printf("%c ", *(*m+2));
    printf("%c ", *(*(m+1)+1));
    printf("%c ", *(m[1]+2));
    printf("%c ", (*(m+2))[3]);
    printf("%c ", *(&m[0][0]+9));
}
