#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_copy(char *);

int main(void){
    char *s = "this is a string";
    char *p = string_copy(s);
    printf("%s", p);
}

char *string_copy(char *s){
    char *new_str = malloc(sizeof(char) + strlen(s));
    int i;
    for(i = 0; i < strlen(s) + 1; i++){
        new_str[i] = s[i];
    }
    return new_str;
}
