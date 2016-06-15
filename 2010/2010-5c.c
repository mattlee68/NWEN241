#include <stdio.h>

int main(int argv, char **argc){
    int i;
    for(i = 1; i < argv; i++){//skips the file name at the start
        printf("%s\n", argc[i]);
    }
    return 0;
}
