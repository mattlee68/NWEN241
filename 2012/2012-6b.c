#include <stdio.h>

int main(void){
    char str1[] = "testing";
    char str2[] = "whatist";
    bitwise_swap(str1, str2);
    printf("%s %s", str1, str2);
    return 0;
}

void bitwise_swap(char str1[], char str2[]){
    int i;
	for (i=0; str1[i] != '\0'; i++){
		if (str1[i] != str2[i]){
			str1[i] ^= str2[i];
			str2[i] ^= str1[i];
			str1[i] ^= str2[i];
		}
	}
}
