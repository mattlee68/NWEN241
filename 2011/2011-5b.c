#include <stdio.h>

int is_within(const char *, char);

int main(void){
    char *str = "testing";
    printf("%d", is_within(str, 't'));
    return 0;
}

int is_within(const char *str, char c){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            return 1;
        }
    }
    return 0;
}
