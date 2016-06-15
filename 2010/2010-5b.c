#include <stdio.h>
#include <string.h>

void reverse(char []);

int main(void){
    char str[] = "ABCDEFG";
    reverse(str);
    printf("%s \n", str);
}

void reverse(char str[]){
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
