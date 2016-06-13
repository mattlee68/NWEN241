#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "ABCDEFG";
    string_reverse(str);
    printf("%s \n", str);
    return 0;
}

void string_reverse(char str[]){
    int i = 0;
    int j = strlen(str) - 1;
    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
