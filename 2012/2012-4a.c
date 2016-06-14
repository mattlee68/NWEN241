#include <stdio.h>

int main(void){
    char m[4][6] = {"01234", "56789", "abcde", "fghij", "klmno"};//should the array be 4 or 5 lomg? - exam says 4
    printf("%c ", **m);
    printf("%c ", *(*m+3));
    printf("%c ", *(*(m+1)+3));
    printf("%c ", *(m[1]+2));
    printf("%c ", (*(m+4))[4]);//prints nothing as we have defined array as 4 long not 5
    printf("%c ", *(&m[0][0]+9));
}
